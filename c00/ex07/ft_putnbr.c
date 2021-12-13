/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcontari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 02:55:50 by gcontari          #+#    #+#             */
/*   Updated: 2021/07/05 13:26:27 by gcontari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	negative_flag(int n)
{
	int		flag;

	flag = 1;
	if (n < 0)
	{
		ft_putchar('-');
		flag = -1;
	}
	return (flag);
}

int	division(int div, int result)
{
	int	tmp;

	tmp = result;
	while (div > 0)
	{
		tmp = tmp / 10;
		div--;
	}
	return (tmp);
}

void	ft_putnbr(int nb)
{
	int		div_counter;
	int		counter;
	double	result;
	int		flag;

	counter = 0;
	flag = negative_flag(nb);
	result = nb * flag;
	while (result > 9)
	{
		result = result / 10;
		counter++;
	}
	ft_putchar('0' + result);
	while (counter > 0)
	{
		div_counter = counter - 1;
		result = division(div_counter, nb * flag);
		ft_putchar('0' + result % 10);
		counter--;
	}
}
