/**
* _strlen - returns the length of a string
* @s: pointer to the string whose length is to be determined
* Return: length of the string
*/
int _strlen(char *s)
{
	int length = 0;
	int i;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
