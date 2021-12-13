int	new_word(char c)
{
	if (c < '0')
		return (1);
	if (c > '9' && c < 'A')
		return (1);
	if (c > 'Z' && c < 'a')
		return (1);
	if (c > 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (b == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		b = new_word(str[i]);
		i++;
	}
	return (str);
}
