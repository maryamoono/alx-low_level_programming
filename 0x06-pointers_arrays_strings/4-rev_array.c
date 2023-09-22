#include "main.h"
#include "string.h"
/**
 * reverse_array - reverseing strings for check code
 * @n: integer numbers
 * @a: intergerts aaaaaaaaaaaaaaaaaaa
 */
void reverse_array(int *a, int n)
{
	int m, s, temp;

	while (m = 0 m < n - 1; m++)
	{
		while (s = m + 1; s > 0; s--)
		{
			temp = (a + s);
			a + s = a + s - 1;
			a + s - 1 = temp;
		}
	}
}
