char	*ft_strcat(char *dest, char *src)
{
	int	isrc;
	int	idest;

	idest = 0;
	while (dest[idest] != '\0')
		idest++;
	isrc = 0;
	while (src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}
