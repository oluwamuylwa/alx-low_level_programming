#include <stdio.h>

/**
* main - Entry program point
*
* Return: Always 0(success)
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	if (l != 'q' && l != 'e')
		putchar(l);
	}
	putchar('\n');
	return (0);
}

