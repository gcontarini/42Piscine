#include <stdlib.h>
#include <stdio.h>

int	ft_strlen2(int size, char **strs)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i] && strs[i][j])
			j++;
		len += j;
		i++;
	}
	return (len);
}

char	*ft_empty(void)
{
	char	*emp;

	emp = malloc(sizeof(char));
	if (!emp)
		return (0);
	*emp = 0;
	return (emp);
}

int	ft_strsup(char *buff, char *src)
{
	int	len;

	len = 0;
	while (src && src[len])
	{
		buff[len] = src[len];
		len++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int	len;
	int	i;

	if (size < 1 || !strs) 
		return (ft_empty());
	p = malloc((ft_strlen2(size, strs) + (size - 1) * ft_strlen2(1, &sep) + 1) * sizeof(char));
	if (!p) 
		return (0);
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strsup(&p[len], strs[i]);
		if (i + 1 != size)
			len += ft_strsup(&p[len], sep);
		i++;
	}
	p[len] = 0;
	return (p);
}
