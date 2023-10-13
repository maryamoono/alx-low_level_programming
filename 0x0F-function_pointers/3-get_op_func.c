#include "3-calc.h"
/**
 * get_op_func - sefrtg
 * @s: rtgfhb
 * Return: thg rrm
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int o = 0;

	while (o < 10)
	{
		if (s[0] == ops->op[o])
			break;
		o++;
	}

	return (ops[o / 2].f);
}
