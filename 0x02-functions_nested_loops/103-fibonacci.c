#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int long first = 1;
	int long second = 2;
	int long next;
	int long sum = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
			sum += first;
	next = first + second;
	first = second;
	second = next;
	}
	printf("%ld\n", sum);

	return (0);
}
