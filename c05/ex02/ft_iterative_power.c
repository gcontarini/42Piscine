int	ft_iterative_power(int nb, int power)
{
	int	re;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	re = 1;
	while (i < power)
	{
		re *= nb;
		i++;
	}
	return (re);
}
