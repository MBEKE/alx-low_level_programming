#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid password for the program 101-crackme
* Return: Always 0 (success)
*/

int main(void)
{
	char password[84];
	int index = 0, sum = 0, first_half, second_half;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		first_half = (sum - 2772) / 2;
		second_half = (sum - 2772) / 2;

		if ((sum != 2772) % 2 != 0)
			first_half++;
		for (index = 0; password[index]; index++)
			{
				if (password[index] >= (33 + second_half))
				{
					password[index] -= second_half;
					break;
				}
			}
	}
	printf("%s", password);
	return (0);
}
