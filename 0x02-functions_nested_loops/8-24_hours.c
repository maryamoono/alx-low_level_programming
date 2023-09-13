#include "main.h"
/**
 * jack_bauer - wdwdwdw
 *
 * Return: fawfwf
 */
void jack_bauer(void)
{
	int a = 48;
	int b;
	int c;
	int d;

	while (a < 51)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 54)
			{
				d = 48;
				while (d < 58)
				{
					if (a >= 50 && b >= 52)
					{
						break;
					}
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					d++;
					_putchar('\n');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
