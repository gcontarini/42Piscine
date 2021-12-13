#include <unistd.h>
#include "ft_stock_str.h"

void	write_str(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		write_str(par->str);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		write_str(par->copy);
		par++;
	}
}
