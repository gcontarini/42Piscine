#include <stdlib.h>

int	ft_strcmp(const char *s1, const char *s2, int sw)
{
	int	len;

	if (sw == 0)
	{
		len = 0;
		while (s1[len])
			len++;
		return (len);
	}
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (*s2 == 0);
}

char	*ft_strstr(char *s1, char *s2)
{
	while (*s1)
	{
		if ((*s1 == *s2) && ft_strcmp(s1, s2, 1))
			return (s1);
		s1++;
	}
	return (0);
}

int	wc(char *str, char *charset, int *w)
{
	int		len;
	char	*p;

	len = 0;
	while (charset[len])
		len++;
	if (ft_strstr(str, charset) == 0)
		return (0);
	else
		str = ft_strstr(str, charset);
	*w = 0;
	while (*str && ft_strstr(str, charset) != 0)
	{
		p = ft_strstr(str, charset);
		if (str != p)
			(*w)++;
		str = p + len;
	}
	return (*w);
}

char	*ft_strcpy(char *b, char *e)
{
	char	*p;
	int		len;

	len = e - b;
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (b != e)
		*p++ = *b++;
	*p = 0;
	return (p - len);
}

char	**ft_split(char *str, char *charset)
{
	char	**re;
	int		w;

	if (!(wc(str, charset, &w)) || !(ft_strstr(str, charset)))
		re = (char **) malloc(sizeof(char *));
	else
	{
		str = ft_strstr(str, charset);
		re = malloc((w + 1) * sizeof(char *));
		if (!re)
			return (0);
		while (*str && ft_strstr(str, charset) != 0)
		{
			if (str != ft_strstr(str, charset))
			{
				*re = ft_strcpy(str, ft_strstr(str, charset));
				if (*re++ == 0)
					return (0);
			}
			str = ft_strstr(str, charset) + ft_strcmp(charset, charset, 0);
		}
	}
	*re = 0;
	return (re - w);
}
