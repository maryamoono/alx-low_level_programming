#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - nknkdnw
 * @argv: jkhj
 * @argv: nnkl
 * Return: effjljfgn
 */
int main(int argc, char *argv[])
{
	int lemon = 0;
	int r;
	int e;

	for (r = 1 ; r < argc ; r++)
	{
		for (e = 0 ; e < strlen(argv[r]) ; e++)
		{
			if (!(argv[r][e] >= 48 && argv[r][e] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		lemon += atoi(argv[r]);
	}
	printf("%d\n", lemon);
	return (0);
}
