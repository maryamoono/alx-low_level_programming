#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - dia is aherouen in dinsy
 * @a: is the apple
 * @size: apple size
 */
void print_diagsums(int *a, int size)
{
	int diag, sum8 = 0, sum9 = 0;

	for (diag = 0; diag < size; diag++)
	{
		sum8 += a[diag];
		a += size;
	}

	a -= size;

	for (diag = 0; diag < size; diag++)
	{
		sum9 += a[diag];
		a -= size;
	}

	printf("%d, %d\n", sum8, sum9);
}
