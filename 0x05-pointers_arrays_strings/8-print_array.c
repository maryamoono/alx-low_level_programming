#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  * print_array- awdwdw
 *   *
 *    *@a: 1
 *     *@n: 2
 *      *
 *       *Return: No
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
		i++;
	}
	printf("\n");
}
