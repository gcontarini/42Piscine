#include <unistd.h>
#include <stdio.h>

void	print_hex(char c)
{
	int		f;
	int		s;
	int		a;
	char	p;

	a = c;
	if (c < 0)
		a = 256 + c;
	f = a / 16;
	s = a % 16;
	write(1, "\\", 1);
	p = f + 87;
	if (f < 10)
		p = f + '0';
	write(1, &p, 1);
	p = s + 87;
	if (s < 10)
		p = s + '0';
	write(1, &p, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
