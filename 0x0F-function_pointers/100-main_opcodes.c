#include <stdio.h>
#include <stdlib.h>
/**
 * main - khkhsd
 * @argc: thd 
 * @argv: djlvd
 * Return: sdhv ms
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int o, bots;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bots = atoi(argv[1]);

	if (bots < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (o = 0; o < bots; o++)
	{
		printf("%02x", opc[o] & 0xFF);
		if (o != bots - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
