#include <stdio.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	test(void *addr, unsigned int size, int i)
{
	printf("Test %d\n", i);
	printf("\n");
}

int	main(void)
{
	int i = 12;
	int *p;

	p = &i;
	printf("%p\n", p);
	p = p - 1;
	printf("%p\n", (p - 1));
	printf("%p\n", (p - 2));
	return (0);
}
