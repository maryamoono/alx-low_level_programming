#include "3-calc.h"
/**
 * op_add - tfhr lejl
 * @a: dejljf
 * @b: ehkhf
 * Return: etg
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - erfdvc
 * @a: erdgdhke f
 * @b: etgfbef
 * Return: yuefheff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ehhhfjkfnf
 * @a: ejkfuhfek
 * @b: dejlffr
 * Return: etfhieyf
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - eter wersfd
 * @a: deyuefi
 * @b: etuye
 * Return: deyuef
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - deiojfejle
 * @a: fyhgfnkd
 * @b: dyfiief ljlef
 * Return: thf kfjvkj d
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
