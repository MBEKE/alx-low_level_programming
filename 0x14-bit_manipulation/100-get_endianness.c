#include "main.h"

/**
 * get_endianness- checks the endianness of a the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	/* create a 4-byte integer with a known byte pattern */
	unsigned int num = 1;
	/* obtain the first byte of the integer */
	unsigned char *ptr = (unsigned char *)&num;

	/* If the first byte (lowest address) is 1, it's endian */
	/* If the last byte (highest address) is 1, it's big endian */
	return (ptr[0] == 1 ? 1 : 0);
}
