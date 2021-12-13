int	ft_sqrt(int nb)
{
	long int	sqrt;

	if (nb == 1)
		return (1);
	sqrt = 1;
	while (sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return ((int) sqrt);
		sqrt++;
	}
	return (0);
}
