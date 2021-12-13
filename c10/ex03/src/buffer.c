#include "ft.h"

int	pop_buff_re(t_buff *buffer, t_file *file2)
{
	int	i;
	
	buffer->curr = malloc(LLEN * sizeof(char));
	if (buffer->curr == 0)
		return (set_errno_mem_int());
	i = 0;
	while (file2 && i < file2->re_size)
	{
		buffer->curr[i] = file2->re[i];
		i++;
	}
	buffer->curr_size = i;
	return (0);
}

int	pop_buff(t_buff *buffer, t_file *file1, t_file *file2)
{
	int	i;

	buffer->curr = malloc(LLEN * sizeof(char));
	if (buffer->curr == 0)
		return (set_errno_mem_int());
	i = 0;
	while (file2 && i < file2->re_size)
	{
		buffer->curr[i] = file2->re[i];
		i++;
	}
	while (i < LLEN && file1->curr != file1->re)
		buffer->curr[i++] = *(file1->curr++);
	buffer->curr_size = i;
	return (0);
}

void	move_buff(t_buff *buffer)
{
	if (buffer->last)
		free(buffer->last);
	buffer->last = buffer->curr;
	buffer->last_size = buffer->curr_size;
}

int	check_last_line(t_buff *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < buffer->curr_size && j < buffer->last_size)
	{
		if (buffer->curr[i++] != buffer->last[j++])
		{
			buffer->equal_flag = 0;
			return (1);
		}
	}
	return (buffer->curr_size != buffer->last_size);
}
