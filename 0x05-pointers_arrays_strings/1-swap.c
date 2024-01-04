/**
* swap_int - swaps the values of two integers
* @a: the first integer
* @b: the second interger
*Return:void
*/
void swap_int(int *a, int *b)
{
	int valueHolder = *a;
	*a = *b;
	*b = valueHolder;
}
