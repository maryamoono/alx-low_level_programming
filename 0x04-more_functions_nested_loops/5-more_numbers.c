#include "main.h"
/**
 *  *  more_numbers - check the code
 *   *
 *    * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int s;

	i = 0;

	while (i < 10)
	{
		s = 0;
		while (s < 15)
		{
			if (s >= 10)
			{
				_putchar('0' + s / 10);
			}
			_putchar('0' + s % 10);
			s++;
		}
		_putchar('\n');
		i++;
	}
}
