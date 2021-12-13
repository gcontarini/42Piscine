#include "../includes/ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s1[i] != '\0' && r == 0)
	{
		if (s2[i] != '\0')
			r = s1[i] - s2[i];
		else
			r = s1[i];
		i++;
	}
	if (s2[i] != '\0' && r == 0)
		r = -s2[i];
	return (r);
}
