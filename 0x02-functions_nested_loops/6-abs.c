#include "main.h"

/**
* _abs - Function that computes the absolute value of an integer.
*
* @a: the integer to compute its absolute value.
*
* Return: Always 0(success).
*/

int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}

	absvalue = k;
	return (absvalue);
}
