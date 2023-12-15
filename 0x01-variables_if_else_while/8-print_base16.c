#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0 (Succes)
*/
int main(void)
{
	int digit;

	/* print numbers 0-9*/
	for (digit = 0; digit <= 9; digit++)
		putchar('0' + digit); /*convert to ASCII representatives*/
	/*print letters a-f*/
	for (digit = 0xA; digit <= 0xF; digit++)
		putchar('a' + (digit - 0xA));
	putchar('\n');

	return (0);
}
