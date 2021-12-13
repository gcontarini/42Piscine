#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int i;
	int *a;
	int **b;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********nbr;

	i = 5;

	a = &i;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	nbr = &h;

	ft_ultimate_ft(nbr);
	
	printf("%d", i);
	return 0;
}
