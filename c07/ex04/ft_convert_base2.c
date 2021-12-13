int	ft_validbase(char *base)
{
	int	len;
	char	*i;

	len = 0;
	while (base && base[len])
		len++;
	if (len < 2)
		return (0);
	while (*(base + 1))
	{
		i = base + 1;
		while (*i)
			if (*base == *i++)
				return (0);
		base++;
	}
	return (1);
}

int	digit(char c, char *base)
{
	int	bs;

	bs = 0;
	while (base[bs] && c != base[bs])
		bs++;
	return (bs);
}

// It doesn't verify the base
int	ft_atoibase(char *nbr, char *base)
{
	int	bs;
	int	neg;
	int	n;
	
	bs = 0;
	while (base[bs])
		bs++;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == 32)
		nbr++;
	neg = 1;
	while (*nbr == '+' || *nbr == '-')
		if (*nbr++ == '-')
			neg *= -1;
	n = 0;
	while (*nbr && digit(*nbr, base) < bs)
		n = n * bs + (digit(*nbr++, base) * neg);
	return (n);
}

char	*ft_strnbr(char *buff, int n, char *base)
{
	unsigned int	nbr;
	unsigned int	bs;

	bs = 0;
	while (base[bs])
		bs++;
	nbr = n;
	if (n < 0)
	{
		*buff++ = '-';
		nbr = -n;
	}
	if (nbr < bs)
		*buff = base[nbr];
	else
	{
		buff = ft_strnbr(buff, nbr / bs, base);
		nbr = nbr % bs;
		*buff = base[nbr];
	}
	return (buff + 1);
}
