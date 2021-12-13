#include "ft.h"

void	hexdump_stdin(t_opt opt)
{
	t_buff	buffer;
	
	buffer.curr_size = 0;
	buffer.line = 0;
	buffer.curr = malloc(LLEN * sizeof(char));
	if (!buffer.curr)
		return ;
	while (read_stdin(opt.fd, &buffer, LLEN) > 0)
	{
		if (buffer.curr_size == LLEN)
		{
			print_one_line(&buffer, opt.print);
			buffer.curr_size = 0;
		}
	}
	if (buffer.curr_size != 0)
	{
		print_one_line(&buffer, opt.print);
		print_nline(buffer.line, opt.print, 1);
	}
	free(buffer.curr);
	return ;
}

int	read_stdin(int fd, t_buff *buffer, int line_size)
{
	int	rc;

	rc = read(fd, buffer->curr + buffer->curr_size, line_size - buffer->curr_size);
	buffer->curr_size += rc;
	return (rc);
}
