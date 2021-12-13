int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				r;

	i = 0;
	r = 0;
	while ((s1[i] != '\0' && r == 0) && i < n)
	{
		if (s2[i] != '\0')
			r = s1[i] - s2[i];
		else
			r = s1[i];
		i++;
	}
	if ((s2[i] != '\0' && r == 0) && i < n)
		r = -s2[i];
	return (r);
}
