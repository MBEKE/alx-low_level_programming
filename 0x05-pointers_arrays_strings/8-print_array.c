#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of ints
* @a: array whose elements are to be printed
* @n: the elements of the array a
* Return: void
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}

