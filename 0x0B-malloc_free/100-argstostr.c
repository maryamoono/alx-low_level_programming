#include "main.h"
#include <stdlib.h>
/**
 * argstostr - mx ,cm tygu jkl
 * @av: kcmnok kmsx cmm
 * @ac: mkio
 * Return: ncm o
 */
char *argstostr(int ac, char **av)
{
	char *fam;
	int m, o, y, sh;

	if (ac == 0)
		return (NULL);

	for (m = o = 0; o < ac; o++)
	{
		if (av[o] == NULL)
			return (NULL);

		for (y = 0; av[o][y] != '\0'; y++)
			m++;
		m++;
	}

	fam = malloc((m + 1) * sizeof(char));

	if (fam == NULL)
	{
		free(fam);
		return (NULL);
	}

	for (o = y = sh = 0; sh < m; y++, sh++)
	{
		if (av[o][y] == '\0')
		{
			fam[sh] = '\n';
			o++;
			sh++;
			y = 0;
		}
		if (sh < m - 1)
			fam[sh] = av[o][y];
	}
	fam[sh] = '\0';

	return (fam);
}
