int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	testbase(char *base)
{
	char	*j;
	int		len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (*base != 0)
	{
		if (*base == '-' || *base == '+')
			return (0);
		j = base + 1;
		while (*j != 0)
		{
			if (*base == *j)
				return (0);
			j++;
		}
		base++;
	}
	return (1);
}

int	digit(char s, char *base)
{
	int	n;

	n = 0;
	while (*base != 0 && *base != s)
	{
		n++;
		base++;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg;
	int	nb;
	int	bs;

	if (testbase(base) == 0)
		return (0);
	bs = ft_strlen(base);
	neg = 1;
	while (*str != 0 && ((s >= 9 && s <= 13) || s == 32))
		str++;
	while (*str != 0 && (s == '-' || s == '+'))
	{
		if (*str++ == '-')
			neg *= -1;
	}
	nb = 0;
	while (*str != 0 && (digit(*str, base) < bs))
	{
		nb = (bs * nb) + ((digit(*str, base)) * neg);
		str++;
	}
	return (nb);
}
