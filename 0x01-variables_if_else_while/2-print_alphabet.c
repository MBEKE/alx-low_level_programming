#include <stdio.h>

/**
*main - entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++; /* move to the next alphabet in the ASCII sequenc*/
	}
	putchar('\n'); /* print a newline char after all letters*/
	return (0);
}
