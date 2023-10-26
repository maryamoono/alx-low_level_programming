#include "main.h"
/**
 * get_bit - mkjnhugy
 * @index: jhgfd
 * @n: oiuyt
 * Return: po0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int v;

	if (n == 0 && index < 64)
		return (0);
	for (v = 0; v <= 63; n >>= 1, v++)
	{
		if (index == v)
		{
			return (n & 1);
		}
	}
	return (-1);
}
