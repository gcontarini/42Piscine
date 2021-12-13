unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	isrc;
	unsigned int	lfind;

	lfind = ft_strlen(to_find);
	isrc = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[isrc] != '\0')
	{
		if (ft_strncmp(&str[isrc], to_find, lfind) == 0)
			return (&str[isrc]);
		isrc++;
	}
	return (0);
}
