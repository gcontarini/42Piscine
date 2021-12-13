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
