#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("The sum of multiples os 3 or 5 below %d is: %d\n", limit, sum);

	return (0);
}

