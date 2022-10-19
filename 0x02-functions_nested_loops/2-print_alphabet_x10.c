#include "main.h"

/**
* print_alphabet_x10 - Function that prints 10 times the alphabet, in lowercase
* followed by a new line
*
* Return: Always 0(success)
*/

void print_alphabet_x10(void)

{
	char i;
	int k = 0;

	while (k <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');

		k++;
	}
}
