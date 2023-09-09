#include<stdio.h>
/*
 * main - Entry point
 *
 *Description:Print numbers 0-10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}
