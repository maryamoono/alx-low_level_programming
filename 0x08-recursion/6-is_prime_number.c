#include "main.h"
/**
 * is_prime - mksldmlkdmmds
 * @s: ds,dls,d
 * @m: sd,sld,l
 * Return: ujm
 */
int is_prime(unsigned int s, unsigned int m)
{
	if (s % m == 0)
	{
		if (s == m)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(s, m + 1));
}
/**
 * is_prime_number - slklkmlsmcsld
 * @n: ncharsh
 * Return: nhgut
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
