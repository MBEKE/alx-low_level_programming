#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 50; /* Number of Fibonacci numbers to be printed */
	int first = 1;
	int second = 2;
	int next;
	int i;

	printf("%d, %d", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf(", %d", next);
	/* uptdate values for the next iteration */
	first = second;
	second = next;
	}
	printf("\n");

	return (0);
}
