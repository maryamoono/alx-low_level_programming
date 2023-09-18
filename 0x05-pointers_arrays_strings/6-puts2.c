#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 * puts2 - checkthis code
 *
 * @str:1
 *
 * Return: void
 */
void puts2(char *str)
{
	int a = 0;
	int b = strlen(str);

	while (a < b)
	{
		putchar(str[a]);
		a = a + 2;
	}
	putchar('\n');
}
