#include "main.h"
/**
 * factorial - mathmatic declarion
 * @n: numbeeeerrrr
 * Return: 1 or 0 0r -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
