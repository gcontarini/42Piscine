#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

void	test(char *dest, char *src, int i, char *r1)
{
	char	*r2;

	printf("Test %d\n", i);
	r2 = ft_strcat(dest, src);
	printf("Expected: %s\n", r1);
	printf("Result: %s\n", r2);
	if (strcmp(r2, r1) == 0)
		printf("SUCCESS\n");
	else
		printf("INVALID RESULT\n");
	printf("---------------------\n");
}

int	main(void)
{
	char	dest[100];

	strcpy(dest, "TESTANDO");
	test(dest, "TEMQUEADICIONAR", 0, "TESTANDOTEMQUEADICIONAR");
	test(dest, "ADICIONAMAIS", 1, "TESTANDOTEMQUEADICIONARADICIONAMAIS");
	test(dest, "muitomaisporvaforasdsadfasdfs", 2, "TESTANDOTEMQUEADICIONARADICIONAMAISmuitomaisporvaforasdsadfasdfs");
	strcpy(dest, "");
	test(dest, "CALMA", 3, "CALMA");
	test(dest, "CA\0LMA", 4, "CALMACA");
	return (0);
}
