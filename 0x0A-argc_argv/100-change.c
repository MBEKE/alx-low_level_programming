#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the numbe of coins to make change.
 * @argc: Argument count.
 * @argv: Argument Vector.
 *
 * Return: 0 if success, otherwise return 1
 */
int main(int argc, char *argv[])
	{
		/* Declare and initialize variables to count the number of coins*/
		int quarters, dimes, nickels, pennies, cents;

		quarters = dimes = nickels = pennies = 0;

		/*check if the no. of arguments is not exactly 2 */
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		/* Convert the no. of the arument to  an integer */
		cents = atoi(argv[1]);

		/* Convert check if the amount is negative  */
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		/* Calculate the number of each coin */
		quarters = cents / 25;
		cents %= 25;

		dimes = cents / 10;
		cents %= 10;

		nickels = cents / 5;
		cents %= 5;

		pennies = cents;
		/* Print the minimum number of coins */
		printf("%d\n", quarters + dimes + nickels + pennies);

		return (0);
	}
