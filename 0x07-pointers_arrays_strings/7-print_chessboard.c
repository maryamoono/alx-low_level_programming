#include "main.h"
/**
 * print_chessboard - lab was achemist one day
 * @a: is acharacter that want check
 * return: nxksx
 */
void print_chessboard(char (*a)[8])
{
	int chess1;
       	int chess2;

	for (chess1 = 0; a[chess1][7]; chess1++)
	{
		for (chess2 = 0; chess2 < 8; chess2++)
			_putchar(a[chess1][chess2]);

		_putchar('\n');
	}
}
