#include <stdio.h>
/**
 * main - awdwdawd
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	
	while (a < 'z')
	{
		if (a != 'q' || a != 'e')
		{
			putchar(a);
		}
		else
		{
			a++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
