#include <stdio.h>

/**
* main - Entry program points
*
* Return: Always 0 (success)
*/
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
