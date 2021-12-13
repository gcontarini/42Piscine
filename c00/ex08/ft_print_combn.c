/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcontari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:07:12 by gcontari          #+#    #+#             */
/*   Updated: 2021/07/04 15:07:16 by gcontari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printarray(int *a, int n)
{
	char	d;
	int		i;

	i = 0;
	while (i < n)
	{
		d = a[i] + '0';
		write(1, &d, 1);
		i++;
	}
	if (a[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	generate_values(int *array, int d, int n)
{
	int	i;
	int	new_array[10];

	i = 0;
	while (i < 10)
	{
		new_array[i] = array[i];
		i++;
	}
	i = d;
	while (d == n - 1 && i < 10)
	{
		new_array[d] = i;
		if (new_array[d - 1] < i || n == 1)
			printarray(new_array, n);
		i++;
	}
	while (d != n - 1 && i < 9)
	{
		new_array[d] = i;
		if (i > new_array[d - 1] || d == 0)
			generate_values(new_array, d + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		array[i] = 0;
		i++;
	}
	generate_values(array, 0, n);
}
