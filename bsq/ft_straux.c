#include "ft.h"

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

char	*ft_strcat(char *dest, char *src, int nb)
{
	int		idest;
	char	*p;

	if (nb == 0)
		idest = 0;
	idest = 0;
	while (dest[idest] != '\0')
		idest++;
	p = malloc((idest + nb + 1) * sizeof(char));
	if (!p)
		return (0);
	ft_strcpy(p, dest);
	while (*src)
		p[idest++] = *src++;
	p[idest] = 0;
	return (p);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
