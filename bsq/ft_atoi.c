int	ft_isspace(char s)
{
	if ((s >= 9 && s <= 13) || s == 32)
		return (1);
	return (0);
}

int	ft_issign(char s)
{
	if (s == '-' || s == '+')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	neg;
	int	nb;

	neg = 0;
	while (*str != 0 && ft_isspace(*str) == 1)
		str++;
	while (*str != 0 && ft_issign(*str) == 1)
	{
		if (*str == '-')
			neg++;
		str++;
	}
	if (neg % 2 == 0)
		neg = 1;
	else
		neg = -1;
	nb = 0;
	while (*str != 0 && (*str >= '0' && *str <= '9'))
	{
		nb = 10 * nb + (*str - '0') * neg;
		str++;
	}
	return (nb);
}
