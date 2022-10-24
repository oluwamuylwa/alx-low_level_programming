#include "main.h"

/**
* more_numbers - Functions that prints 10 times the numbers, from 0 to 14
* followed by a new line
*
* Return: no return
*/

void more_numbers(void)
{
	int n, num;

	for (n = 0; n < 10; n++)
	{

		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
