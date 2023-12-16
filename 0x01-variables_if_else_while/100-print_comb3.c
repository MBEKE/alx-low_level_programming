#include <stdio.h>

/**
*main - entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	/*initialize 2 variables to represent 2 digits in each combo*/
	int tens_digit;
	int units_digit;

	/* Outer loop (Tens Digit) */
	for (tens_digit = 0; tens_digit <= 8; tens_digit++)
	{
		/* Inner loop (units digit) */
		for (units_digit = tens_digit + 1; units_digit <= 9; units_digit++)
		{
			/* print tens & units digits in ASCII character rep */
			putchar('0' + tens_digit);
			putchar('0' + units_digit);

			if (!(tens_digit == 8 && units_digit == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
