#include <stdio.h>
/**
 * print_numbers - int i
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
}
