#include <stdio.h>
#include "main.h"

/**
* print_buffer - Prints the content of a buffer in a specified format
* @b: Pointer to the buffer
* @size: Number of bytes to print from the buffer.
*/
void print_buffer(char *b, int size)
{
	int i, j;

	/* Check if size is 0 or less, print a newline and return */
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	/* Iterate over the buffer in chunks of 10 bytes */
	for (i = 0; i < size; i += 10)
	{
		/* Print the position of the first byt in hexdec */
		printf("%08x: ", i);

		/* print 2 bytes at a time in hexdec and as chars */
		for (j = i; j < i + 10; j++)
		{
			/* Print the hexdec representation of the byte */
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf(" ");
			/* print spaces between pairs of bytes */
			if (j % 2 != 0)
				printf(" ");
		}
		/* print the content of the buffer as characters */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%c", (b[j] >= 32 && b[j] <= 126) ? b[j] : '.');
			else
				printf(" ");
		}
		/* print newline for the end of each line */
		printf("\n");
	}
}
