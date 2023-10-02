#include <stdio.h>
#include <stdlib.h>
/**
 * main - i want to know
 * @argv: if there any way
 *
 * @argc: to get the fo
 * Return: nbjmh mk
 */
int main(int argc, char *argv[])
{
	int lemon = 0;
	unsigned int r;
	int array[5] = {25, 10, 5, 2, 1};
	int e;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	e = atoi(argv[1]);

	if (e < 0)
	{
		printf("0\n");
		return (0);
	}
	for (r = 0 ; r < 5 ; r++)
	{
		lemon += e / array[r];
		e = e % array[r];
	}
	printf("%d\n", lemon);
	return (0);
}
