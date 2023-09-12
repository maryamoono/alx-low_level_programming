#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *
 *@i: The number to be treated
 *
 *Return: iiiii
 */
int print_last_digit(int i)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
	_putchar(-1 + 48);
	return (-1);
	}
	else
	{
	_putchar(1 + 48);
	return (1);
}
