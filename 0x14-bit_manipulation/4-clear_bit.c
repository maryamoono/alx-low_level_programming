#include "main.h"
/**
 * clear_bit - jnyu
 * @index: lol
 * @n: mklo
 * Return: lok
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int e;

	if (index > 63)
		return (-1);
	e = 1 << index;
	if (*n & e)
		*n ^= e;
	return (1);
}
