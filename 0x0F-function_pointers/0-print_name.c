#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name using a printing function.
 * @name: name  to be printed
 * @f: pointer to the printing function.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* check if name and function are not NULL b4 calling the function*/
	if (name != NULL && f != NULL)
		f(name);
}
