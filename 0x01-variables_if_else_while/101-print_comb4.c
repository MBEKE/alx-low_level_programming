#include <stdio.h>

/**
*main - entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	/* declare 3 variables for each digit of the combo */
	int hundreds_digit;
	int tens_digit;
	int ones_digit;

	/* Outer loop for the hundreds_digit */
	for (hundreds_digit = 0; hundreds_digit <= 9; hundreds_digit++)
	{
		/* Inner loop for the tens digit */
		for (tens_digit = hundreds_digit; tens_digit <= 9; tens_digit++)
		{
			/* Inner loop for the ones digit */
			for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
			{
				/* print the digits in their ASCII representation */
				putchar('0' + hundreds_digit);
				putchar('0' + tens_digit);
				putchar('0' + ones_digit);

				if (!(hundreds_digit == 9 && tens_digit == 8 && ones_digit == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
