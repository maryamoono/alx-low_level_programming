#include "3-calc.h"
/**
 * main - tg fnvnv ,sjdldl
 * @argc: ljflf lvldkv
 * @argv: ddkkfekf llkfedf
 * Return: djkdhdf
 */
int main(int argc, char *argv[])
{
	int m, s;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == 0)
	{
		printf("Error\n");
		exit(99);
	}

	m = atoi(argv[1]);
	s = atoi(argv[3]);

	printf("%d\n", operation(m, s));
	return (0);
}
