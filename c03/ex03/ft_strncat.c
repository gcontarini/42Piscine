char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	isrc;
	unsigned int	idest;

	idest = 0;
	while (dest[idest] != '\0')
		idest++;
	isrc = 0;
	while (src[isrc] != '\0' && isrc < nb)
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}
