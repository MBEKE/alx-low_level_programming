/**
* _strlen - returns the length of a string
* @s: pointer to the string whose length is to be determined
* Return: length of the string
*/
int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
