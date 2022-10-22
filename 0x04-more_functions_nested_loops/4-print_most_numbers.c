#include "main.h"

/**
* print_most_numbers - prints numbers between 0 to 9
* (neither 2 nor 4)
* Return : no return
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num);
	}
	_putchar('\n');
}
