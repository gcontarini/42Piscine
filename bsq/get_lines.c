#include "ft.h"

int	nline_len(char *file_name, int n)
{
	int		rc;
	int		l;
	char	c;

	if (open(file_name, O_RDONLY) < 0)
		return (-1);
	l = 0;
	rc = 1;
	while (l < n - 1 && rc >= 0)
	{
		rc = read(3, &c, 1);
		if (c == '\n')
			l++;
	}
	l = 0;
	c = 'a';
	while (c != '\n' && rc >= 0)
	{
		rc = read(3, &c, 1);
		l++;
	}
	close(3);
	if (rc < 0)
		return (-1);
	return (l);
}

int	read_nline(char *file_name, char *buff, int len, int n)
{
	int		fd;
	int		rc;
	int		l;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (-1);
	l = 0;
	while (l < n - 1 && rc >= 0)
	{
		rc = read(fd, buff, 1);
		if (*buff == '\n')
			l++;
	}
	l = 0;
	while (l < len - 1 && rc >= 0)
	{
		rc = read(fd, buff++, 1);
		l++;
	}
	close(fd);
	if (rc < 0)
		return (-1);
	*buff = 0;
	return (0);
}

int	check_params(char *bff, t_fheader fh, int len)
{
	int	i;

	i = 0;
	while ((bff[i] >= 33 && bff[i] <= 126))
		i++;
	if (i < 3)
		return (-1);
	if (fh.emp == fh.ob || fh.emp == fh.dw || fh.ob == fh.dw)
		return (-1);
	i = 0;
	while (i < len - 3 && (bff[i] >= '0' && bff[i] <= '9'))
		i++;
	if (i != len - 3)
		return (-1);
	return (0);
}

int	read_first_line(char *bff, t_fheader *fh, int len)
{
	char	*nbr;

	while (bff[len] != '\n')
		len++;
	fh->emp = *(bff + len - 3);
	fh->ob = *(bff + len - 2);
	fh->dw = *(bff + len - 1);
	if (check_params(bff, *fh, len) < 0)
		return (-2);
	nbr = malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (-1);
	ft_strncpy(nbr, bff, len);
	fh->lines = ft_atoi(nbr);
	free(nbr);
	bff += len + 1;
	len = 0;
	while (bff[len] != '\n')
		len++;
	fh->cols = len;
	return (0);
}
