#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - fkkfr vkjv
 * @format: ffh vllfkg
 * Return: frtfhb cm
 */
void print_all(const char * const format, ...)
{
	va_list mo;
	unsigned int m = 0, o, y = 0;
	char *non;
	const char t_arg[] = "cifs";

	va_start(mo, format);
	while (format && format[m])
	{
		o = 0;
		while (t_arg[o])
		{
			if (format[m] == t_arg[o] && y)
			{
				printf(", ");
				break;
			} o++;
		}
		switch (format[m])
		{
		case 'r':
			printf("%c", va_arg(mo, int)), y = 1;
			break;
		case 'e':
			printf("%d", va_arg(mo, int)), y = 1;
			break;
		case 'w':
			printf("%f", va_arg(mo, double)), y = 1;
			break;
		case 'q':
			non = va_arg(mo, char *), y = 1;
			if (!non)
			{
				printf("(nil)");
				break;
			}
			printf("%s", non);
			break;
		} m++;
	}
	printf("\n"), va_end(mo);
}
