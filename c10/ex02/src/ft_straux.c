#include "ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

int	ft_allocate(t_buffer *text, int rc, int limit)
{
	int	len;

	len = ft_strlen(text->begin);
	if (limit < len + rc)
		return (limit);
	return (len + rc);
}

char	*ft_append_dump(t_buffer *text, char *buff, int rc, int limit)
{
	char	*p;
	int	i;
	int	j;

	if (!rc)
		return (text->begin);
	j = ft_allocate(text, rc, limit);
	p = malloc((j + 1) * sizeof(char));
	if (!p)
		return (ft_memerror());
	*(p + j--) = 0;
	i = rc - 1;
	while (j >= 0 && i >= 0)
		*(p + j--) = *(buff + i--);
	i = 1;
	while (j >= 0)
		*(p + j--) = *(text->end - i++);
	text->end = p + ft_allocate(text, rc, limit);
	free(text->begin);
	return (p);
}

char	*ft_append(t_buffer *text, char *buff, int rc)
{
	char	*p;
	int	len;
	int	i;

	if (!rc)
		return (text->begin);
	len = ft_strlen(text->begin);
	p = malloc((len + rc + 1) * sizeof(char));
	if (!p)
		return (ft_memerror());
	while (text->begin && *(text->begin))
		*p++ = *(text->begin)++;
	i = 0;
	while (buff && i < rc)
		*p++ = buff[i++];
	free(text->begin - len);
	*p = 0;
	text->end = p;
	return (p - len - rc);
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

/*
char	*ft_dump(t_buffer *text, int limit)
{
	int	i;
	char	*p;

	if (ft_strlen(text->begin) < limit)
		return (text->begin);
	p = malloc((limit + 1) * sizeof(char));
	if (!p)
		return (ft_memerror());
	i = 0;
	while (i < limit)
	{
		i++;
		text->end--;
	}
	while (text->end && *(text->end))
		*p++ = *(text->end)++;
	*p = 0;
	free(text->begin);
	text->end = p;
	return (p - i);
}
*/
