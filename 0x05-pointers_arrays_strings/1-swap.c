#include "main.h"

/**
* swap_int - Functions that swaps the values of two integers
*
* @a: First argument to be swapped
* @b: Second argument to be swapped
*
* Return: no return.
*/

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
