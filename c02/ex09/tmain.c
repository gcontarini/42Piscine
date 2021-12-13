#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	text[100];

	strcpy(text, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	ft_strcapitalize(text);
	printf("%s", text);
	return (0);
}
