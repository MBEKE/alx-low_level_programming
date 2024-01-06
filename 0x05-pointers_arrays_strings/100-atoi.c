#include "main.h"

/**
* _atoi - converts a sting to integer
*@s: the input string
* Return: the converted interger.
*/
int _atoi(char *s)
{
	int c = 0;
	unsigned int num = 0;
	int sign = 1;
	int isNumeric = 0;

	while (s[c])
	{
		if (s[c] == '-')
			sign *= -1;
		while (s[c] >= '0' && s[c] <= '9')
		{
			isNumeric = 1;
			num = (num * 10) + (s[c] - '0');
			c++;
		}
		if (isNumeric == 1)
			break;
		c++;
	}
	num *= sign;
	return (num);
}
