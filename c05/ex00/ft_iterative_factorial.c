int	ft_iterative_factorial(int nb)
{
	int	re;
	int	i;

	if (nb < 0)
		return (0);
	re = 1;
	i = 1;
	while (i <= nb)
	{
		re *= i;
		i++;
	}
	return (re);
}
