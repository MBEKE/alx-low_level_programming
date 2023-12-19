#include "main.h"

/**
* print_last_digit - prints the lastdigit of a number
*
*@n: The mumber whose last digit is to be printed
*
* Return: The value fo the last digit
*/
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
