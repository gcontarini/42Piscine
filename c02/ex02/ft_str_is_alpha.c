int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			flag = 0;
		}
		if (str[i] > 'Z' && str[i] < 'a')
		{
			flag = 0;
		}
		i++;
	}
	return (flag);
}
