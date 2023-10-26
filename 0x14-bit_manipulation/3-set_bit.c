#include "main.h"
/**
 * set_bit - jnbhvg
 * @index: kmnj
 * @n: oip
 * Return: olp
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;
	*n = (*n | r);
	return (1);
}
