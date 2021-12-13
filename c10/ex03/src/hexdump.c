#include "ft.h"

void	set_remainder(t_file *file1, t_file *file2)
{
	int	i;

	if (!file1)
		return ;
	if (!file2)
		i = file1->total_size;
	else
		i = file1->total_size + file2->re_size;
	file1->re_size = i % LLEN;
	if (!file2)
		file1->re = file1->str + (i - file1->re_size);
	else
		file1->re = file1->str + (file1->total_size - file1->re_size);
}

void	move_file_free_old(t_file **file1, t_file **file2)
{
	t_file	*tmp;

	if ((*file1)->total_size == 0)
		return ;
	tmp = *file2;
	*file2 = *file1;
	if (!tmp)
		return ;
	free(tmp->str);
	free(tmp);
}

void	init_vars(t_buff *buff, t_file **file1, t_file **file2)
{
	buff->last = 0;
	buff->last_size = 0;
	buff->curr_size = 0;
	buff->line = 0;
	buff->equal_flag = 0;
	*file1 = 0;
	*file2 = 0;
}

void	hexdump(t_opt opt, char **av)
{
	t_buff	buffer;
	t_file	*file1;
	t_file	*file2;
	int	i;

	i = 1;
	if (opt.print)
		i = 2;
	init_vars(&buffer, &file1, &file2);
	while (av && av[i])
	{
		errno = 0;
		file1 = open_full_file(av[i++], opt.fd);
		if (errno)
			continue;
		set_remainder(file1, file2);
		printhex(&buffer, file1, file2, opt.print);
		move_file_free_old(&file1, &file2);
	}
	print_remainder(&buffer, &file2, opt);
}

int	printhex(t_buff *buffer, t_file *file1, t_file *file2, int option)
{
	if (file1->total_size == 0)
		return (1);
	pop_buff(buffer, file1, file2);
	if (check_last_line(buffer))
		print_one_line(buffer, option);
	else
		print_when_equal(buffer);
	move_buff(buffer);
	while (file1->curr != file1->re)
	{
		pop_buff(buffer, file1, 0);
		if (check_last_line(buffer))
			print_one_line(buffer, option);
		else
			print_when_equal(buffer);
		move_buff(buffer);
	}
	return (0);
}
