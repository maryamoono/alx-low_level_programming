#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - hnv ufkl kml
 * @separator: demlfmlf
 * @n: dlkdlekf
 * Return: ljiwdlw kjel
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mo;
	unsigned int m;
	char *non;

	va_start(mo, n);

	for (m = 0; m < n; m++)
	{
		non = va_arg(mo, char *);

		if (non)
			printf("%s", non);
		else
			printf("(nil)");

		if (m < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(mo);
}
