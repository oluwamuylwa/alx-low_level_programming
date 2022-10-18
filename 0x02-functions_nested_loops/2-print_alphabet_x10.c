#include "main.h"

/**
* print_alphabet_x10 - Function that prints x10 the alphabet, lowercase
* follow by a new line
*
* Return: Always 0(success)
*/

void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	k++;
	_putchar('\n');
}
