#include <stdio.h>
/**
 * print_line - interger n
 *
 * @n: part line
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n ; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
