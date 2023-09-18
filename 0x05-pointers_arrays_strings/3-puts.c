#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - the checking code
 *
 * @str: 2
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	int n = strlen(str);


	while (i < n)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
