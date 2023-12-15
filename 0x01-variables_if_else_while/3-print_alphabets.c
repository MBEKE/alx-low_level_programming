#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	/*print lowercase alphabet*/

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}


	/*print UPPERCASE alphabet*/
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}
