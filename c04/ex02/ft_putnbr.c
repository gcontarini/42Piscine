#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	i;
	char			p;

	if (nb < 0)
	{
		write(1, "-", 1);
		i = -nb;
	}
	else
		i = nb;
	if (i < 10)
	{
		p = i + '0';
		write(1, &p, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		p = (i % 10) + '0';
		write(1, &p, 1);
	}
}
