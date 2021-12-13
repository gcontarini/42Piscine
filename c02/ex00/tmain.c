/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcontari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:47:33 by gcontari          #+#    #+#             */
/*   Updated: 2021/07/05 12:47:47 by gcontari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[6];
	char	*t;

	src = "Teste";
	t = ft_strcpy(dest, src);
	printf("%s", t);
	return (0);
}
