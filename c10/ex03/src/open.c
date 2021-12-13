#include "ft.h"

t_file	*open_full_file(char *file, int fd)
{
	t_file	*ld;
	char	buff[BUFF_SIZE];
	int	rc;

	if (fd && open(file, O_RDONLY) < 0)
		return (error_handler_file(errno, file));
	ld = malloc(sizeof(t_file));
	if (!ld)
		return (set_errno_mem_file());
	ld->str = 0;
	ld->total_size = 0;
	rc = read(fd, buff, BUFF_SIZE);
	while (!errno && rc > 0)
	{
		ld->str = append_data(ld->str, buff, rc, ld->total_size);
		ld->total_size += rc;
		rc = read(fd, buff, BUFF_SIZE);
	}
	if (close(fd) < 0 || errno)
		return (error_handler_file(errno, file));
	ld->curr = ld->str;
	return (ld);
}

char	*append_data(char *p, char *buff, int rc, int size)
{
	char	*result;
	int	i;
	
	result = malloc((rc + size) * sizeof(char));
	if (!result)
		return (set_errno_mem());
	i = 0;
	while (p != 0 && i < size)
	{
		result[i] = p[i];
		i++;
	}
	i = 0;
	while (i < rc)
		result[size + i++] = *buff++;
	free(p);
	return (result);
}

/*
t_file	remainder_buff(t_file loaded)
{
	t_file	remainder;
	int	i;

	i = loaded.size - (loaded.size % 16);
	remainder.size = 0;
	remainder.bff = malloc(loaded.size - i);
	if (!remainder.bff)
		return (error_handler_file(ENOMEM, ""));
	while (i < loaded.size)
		remainder.bff[remainder.size++] = (loaded.bff)[i++];
	free(loaded.bff);
	return (remainder);
}
*/
