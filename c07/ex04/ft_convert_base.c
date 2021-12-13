#include <stdlib.h>

char	*ft_strnbr(char *buff, int n, char *base);
int	ft_atoibase(char *nbr, char *base);
int	ft_validbase(char *base);

int	ft_nlen(int n, char *base)
{
	int	len;
	int	bs;

	if (n == 0)
		return (1);
	bs = 0;
	while (base[bs])
		bs++;
	len = 0;
	while (n != 0)
	{
		len++;
		n /= bs;
	}
	return (len);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*n_base;
	char	*n_end;
	int	n;

	if (!ft_validbase(base_from) || !ft_validbase(base_to) || !nbr)
		return (0);
	n = ft_atoibase(nbr, base_from);
	if (n < 0)
		n_base = malloc((ft_nlen(n, base_to) + 2) * sizeof(char));
	else
		n_base = malloc((ft_nlen(n, base_to) + 1) * sizeof(char));
	if (!n_base)
		return (0);
	n_end = ft_strnbr(n_base, n, base_to);
	*n_end = 0;
	return (n_base);
}
