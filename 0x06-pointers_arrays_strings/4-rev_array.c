#include "main.h"
#include <string.h>
/**
 * reverse_array - reverseing strings for check code
 * @n: integer numbers
 * @a: intergerts aaaaaaaaaaaaaaaaaaa
 */
void reverse_array(int *a, int n)
{
	int v, l, temp;

	for (v = 0; v < n - 1; v++)
	{
		for (l = v + 1; l > 0; l--)
		{
			temp = *(a + l);
			*(a + l) = *(a + (l - 1));
			*(a + (l - 1)) = temp;
		}
	}
}
