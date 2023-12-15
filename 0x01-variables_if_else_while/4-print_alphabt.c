#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0 (Successful)
*/
int main(void)
{
	char current_letter = 'a';

	while (current_letter <= 'z')
	{
		if (current_letter != 'e' && current_letter != 'q')
			putchar(current_letter);
		current_letter++;
	}

	putchar('\n');

	return (0);
}
