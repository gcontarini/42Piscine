#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset && c != *charset)	
		charset++;
	return (*charset != 0);
}

int	ft_wc(char *str, char *charset)
{
	int	wc;

	if (!str || !charset)
		return (0);
	wc = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
			wc++;
		while (*str && !is_sep(*str, charset))
			str++;
	}
	return (wc);
}

char	*ft_strsup2(char **p, char *charset)
{
	int	len;
	char	*str;

	while (is_sep(**p, charset))
		(*p)++;
	len = 0;
	while ((*p)[len] && !is_sep((*p)[len], charset))
		len++;
	if (!len)
		return (0);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (**p && !is_sep(**p, charset))
		*str++ = *(*p)++;
	*str = 0;
	return (str - len);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	*p;
	int	wc;

	wc = ft_wc(str, charset);
	strs = malloc((wc + 1) * sizeof(char *));
	if (!strs)
		return (0);
	p = str;
	while (wc && *p)
	{
		*strs = ft_strsup2(&p, charset);
		if (*strs && **strs)
			strs++;
	}
	*strs = 0;
	return (strs - wc);
}
