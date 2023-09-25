#include "main.h"
/**
 * print_chessboard - lab was achemist one day
 * @a: llllllllllllllllllllllllllllllllllllllllldwadwad;l;dl
 * return: nxksx
 */
void print_chessboard(char (*a)[8])
{
	int indx7, indx9;

	for (indx7 = 0; a[indx7][7]; indx7++)
	{
		for (indx9 = 0; indx9 < 8; indx9++)
			_putchar(a[indx9][indx9]);

		_putchar('\n');
	}
}
