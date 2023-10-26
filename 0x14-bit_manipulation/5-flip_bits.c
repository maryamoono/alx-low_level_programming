#include "main.h"
/**
 * flip_bits - bhvgc
 * @m: nj
 * @n:pol
 * Return: lop
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int vesl;

	for (vesl = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			vesl++;
	}
	return (vesl);
}
