int	ft_is_prime(int nb)
{
	long int	div;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	div = 3;
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	if (nb <= 2)
		return (2);
	prime = nb;
	if (nb % 2 == 0)
		prime = nb + 1;
	while (prime <= 2147483647)
	{
		if (ft_is_prime(prime) == 1)
			return (prime);
		prime += 2;
	}
	return (0);
}
