#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - jkwh dbdb nvc
 * @n: kjflefkl
 * Return: what taht i will wrie soon
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list mo;
	unsigned int y;

	if (n == 0)
		return (0);
	va_start(mo, n);
	for (y = 0 ; y < n ; y++)
		sum += va_arg(mo, int);
	va_end(mo);
	return (sum);
}
