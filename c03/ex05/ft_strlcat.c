#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	isrc;
	unsigned int	lsrc;
	unsigned int	idest;
	unsigned int	ldest;

	ldest = ft_strlen(dest);
	idest = ldest;
	lsrc = ft_strlen(src);
	if (size <= ldest)
		return (lsrc + size);
	isrc = 0;
	while (src[isrc] != '\0' && idest < size - 1)
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (ldest + lsrc);
}
