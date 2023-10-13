#include "function_pointers.h"
/**
 * int_index - khkrf hvnfbljld
 * @array: dke;fk;efkr
 * @size: efnkfhkrfh
 * @cmp: eeyjf lml
 * Return: wgbv mdjnf ioi
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int o;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (o = 0; o < size; o++)
			if (cmp(array[o]))
				return (o);
	}

	return (-1);
}
