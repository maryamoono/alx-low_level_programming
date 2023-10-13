#include "function_pointers.h"
/**
 * array_iterator - ljele mlmlv
 * @array: dkldkld kjdl
 * @size: dwdmlklkf  mdkd
 * @action: kjwldjldkl
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array && action)
		for (s = 0; s < size; s++)
			action(array[s]);
}
