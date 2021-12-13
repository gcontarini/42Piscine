#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	bs;
	unsigned int	n;

	n = nbr;
	if (testbase(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	bs = ft_strlen(base);
	if (n < bs)
		write(1, base + n, 1);
	else
	{
		ft_putnbr_base(n / bs, base);
		n = n % bs;
		write(1, base + n, 1);
	}
}
