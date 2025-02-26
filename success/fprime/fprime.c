#include <stdlib.h>
#include <stdio.h>

void	fprime(int n)
{
	int divisor = 2;
	int first = 1;

	while (n > 1)
	{
		while (n % divisor == 0)
		{
			if (!first)
				printf("*");
			printf("%d", divisor);
			n = n / divisor;
			first = 0;
		}
		divisor++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int n = atoi(av[1]);

		if (n == 1)
		{
			printf("1\n");
			return (0);
		}

		if (n <= 0)
		{
			printf("\n");
			return (0);
		}
		fprime(n);

	}
	printf("\n");
	return(0);
}
