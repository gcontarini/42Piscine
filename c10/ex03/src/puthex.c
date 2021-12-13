#include "ft.h"

void	printhex_char(unsigned char c)
{
	unsigned int	i;

	i = (unsigned int) c;
	write(1, " ", 1);
	if (i < 16)
		write(1, "0", 1);
	ft_putnbrhex(i, "0123456789abcdef");
}

void	ft_putnbrhex(int nbr, char *base)
{
	unsigned int	n;

	n = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	if (n < 16)
		write(1, base + n, 1);
	else
	{
		ft_putnbrhex(n / 16, base);
		n = n % 16;
		write(1, base + n, 1);
	}
}

void	ft_parse(int i)
{
	int	j;

	j = 0;
	while (j < LLEN - i)
	{
		write(1, "   ", 3);
		j++;
	}
}
