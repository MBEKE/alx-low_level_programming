#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 50; /* Number of Fibonacci numbers to be printed */
	long int first = 1;
	long int second = 2;
	long  int next;
	int i;

	printf("%ld, %ld", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf(", %ld", next);
	/* uptdate values for the next iteration */
	first = second;
	second = next;
	}
	printf("\n");

	return (0);
}
