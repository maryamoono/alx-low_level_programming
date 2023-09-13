#include <stdio.h>

/**
 *  * main - Prints natural numbers below 1024 that are
 *   * multiplies of 3 or 5
 *    *
 *     * Return: Always 0.
 */
int main(void)
{
	int a, b;

	a = 1;

	while (a < 1024)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
		a++;
	}
	printf("%d\n", b);
	return (0);
}
