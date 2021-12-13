#include "ft.h"

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

int	ft_atoi(char *str)
{
	int	neg;
	int	n;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	neg = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg *= -1;
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = 10 * n + (*str++ - '0') * neg;
	return (n);
}

int	ft_sizehex(int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n != 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}

int	ft_compare(char	*b1, char *b2, int rc)
{
	int	i;

	i = 0;
	while (i < rc && b1[i] == b2[i])
		i++;
	return (i == rc);
}
