#include <stdio.h>
/**
 * print_diagonal -   check the code
 *
 * @n: integer
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (s = 0 ; s < i ; s++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
