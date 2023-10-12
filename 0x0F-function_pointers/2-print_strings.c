#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - hvbgf mchd jkd
 * @separator: kljdwldl
 * @n: lkdlkd
 * Return: jdlwjdlw
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int o;
	va_list mo;
	char *sep;

	va_start(mo, n);
	for (o = 0 ; o < n ; o++)
	{
		sep = va_arg(mo, char *);

		if (separator && o < n - 1)
			printf("%s", separator);
		if (sep)
			printf("%s", sep);
		else
			printf("nil");
	}
	printf("\n");
	va_end(mo);
}
