#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int x = 0;

	char a = 'a';

	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
