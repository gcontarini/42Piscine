/*int	lines_lenght(char *buf, int i, int j)
{
	int len;
	int line;

	line = 0;
	i = 0;
	while (buf[i] != '\0')
	{
		j = 0;
		while (buf[j] != '\n' && i == 0)
			j++;
		if (buf[j] == '\n' && i == 0)
			len = j;
		i = j;
		j = 1;
		while (j < len && buf[i+j] != '\n')
			j++;
		if (j == len && buf[i+j] != '\n')
			return (-1);
		if (j == len && buf[i+j] == '\n')
			line++;
	}
	if (buf[i] == '\0' && line == p_l)
		return (1);
	return (-1);
}*/

int	check_char(char *buf, t_fheader fh)
{
	while (buf[i] != '\0')
	{
		while (buf[i] == fh.emp || buf[i] == fh.ob)
		{
			i++;
		}
		if (buf[i] == '\n')
		{
			if (buf[i - 1] == '\n' || buf[i + 1] == '\n')
			   return (-1);	
			i++;
		}
		else if (buf[i] == '\0')
			return (1);
	}
	return (1);
}

int	lines_len(char *buf, int i, int j, t_fheader fh)
{
	int	len;
	int	line;

	line = 1;
	i = 0;
	while (buf[i] != '\0')
	{
		j = 0;
		while (buf[j] != '\n' && i == 0)
			j++;
		if (buf[j] == '\n' && i == 0)
			len = j + 1;
		i = j;
		if (buf[i + len] == '\n' || buf[i + len] == '\0')
		{
			if (buf[i + len] != '\0')
				i = i + len;
			line++;
		}
		else
			return (-1);
	}
	if (buf[i] == '\0' && line == fh.lines)
		return (1);
	return (-1);
}

int	first_line(char *buf, t_fheader *fh)
{
	int i;
	int j;

	i = 0;
	j = 0
	while (buf[i])
	{
		if (buf[i] == '\n')
			j++;
		if (j == 2)
			return (0);
		i++;
	}
	if (j < 2)
		return (-1);
}

int	check_input(char *map_name, char *buf)
{

	if (lines_len(buf, 0, 0, fh) == 1)
	{
		if (check_char(buf, fh) != 1)
			return (-1);
	}
	else
		return (-1);
}
