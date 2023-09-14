#include "main.h"
#include <stdio.h>
/**
 * more_numbers - i an integer has to be check
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				i = i / 10;
				_putchar('0' + i);
			}
			_putchar('0' + (i % 10));
			i++;
		}
		putchar('\n');
		j++;
	}
}
