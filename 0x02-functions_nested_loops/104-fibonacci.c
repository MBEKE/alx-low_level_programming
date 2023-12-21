#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 98; /* Number of Fibonacci numbers to be printed */
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long  int next;
	int i;

	printf("%lu, %lu", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf(", %lu", next);
	/* uptdate values for the next iteration */
	first = second;
	second = next;
	}
	printf("\n");

	return (0);
}
