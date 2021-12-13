#include "ft.h"

int	print_remainder(t_buff *buffer, t_file **file2, t_opt opt)
{
	if (*file2 == 0 || (*file2)->total_size == 0)
		return (1);
	pop_buff_re(buffer, *file2);
	if (check_last_line(buffer))
		print_one_line(buffer, opt.print);
	else
		print_when_equal(buffer);
	print_nline(buffer->line, opt.print, 1);
	if (*file2)
	{
		free((*file2)->str);
		free(*file2);
	}
	free(buffer->last);
	free(buffer->curr);
	return (0);
}

void	print_when_equal(t_buff *buffer)
{
	buffer->line += buffer->curr_size;
	if (buffer->equal_flag == 0)
		write(1, "*\n", 2);
	buffer->equal_flag = 1;
}

int	print_one_line(t_buff *buffer, int option)
{
	int	i;

	print_nline(buffer->line, option, 0);
	if (option == 1)
		write(1, " ", 1);
	i = 0;
	while (i < LLEN / 2 && i < buffer->curr_size)
		printhex_char(buffer->curr[i++]);
	if (option == 1)
		write(1, " ", 1);
	while (i < LLEN && i < buffer->curr_size)
		printhex_char(buffer->curr[i++]);
	ft_parse(i);
	if (option == 1)
		printcontent(buffer->curr, buffer->curr_size);
	write(1, "\n", 1);
	buffer->line += i;
	return (i);
}

void	print_nline(int line, int option, int linebreak)
{
	int	size;
	int	i;

	size = ft_sizehex(line);
	i = 0;
	while (i < 7 + option - size)
	{
		write(1, "0", 1);
		i++;
	}
	ft_putnbrhex(line, "0123456789abcdef");
	if (linebreak)
		write(1, "\n", 1);
}

void	printcontent(char *buff, int rc)
{
	int	i;

	write(1, "  |", 3);
	i = 0;
	while (i < rc)
	{
		if (buff[i] >= 32 && buff[i] <= 126)
			write(1, buff + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "|", 1);
}
