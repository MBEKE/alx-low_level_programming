#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	/*print last digit*/
	printf("Last digit of %d is %d and is ", n, last_digit);

	/*compare the last digit to 6*/
	if (last_digit == 0)
		printf("0\n");
	else if (last_digit < 6)
		printf("less than 6 and not 0\n");
	else
		printf("greater than 5\n");
	return (0);
}

