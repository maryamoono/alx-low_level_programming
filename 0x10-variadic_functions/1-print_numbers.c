#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - kjljdlwjd
 * @separator: iejiowjejo
 * @n: hdkhkdke
 * Return: kjwjnd
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list mo;

	va_start(mo, n);
	for (m = 0 ; m < n ; m++)
	{
		printf("%d", va_arg(mo, int));
		if (separator && m < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mo);
}
