#include <stdio.h>
/**
 * print_most_numbers - with i integer
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)

		putchar('0' + i);
		i++;
	}
	putchar('\n');
}
