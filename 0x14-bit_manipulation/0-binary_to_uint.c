#include "main.h"
/**
 * binary_to_uint - njbhvg
 * @b: njbh
 * Return: njbhvg
 */
unsigned int binary_to_uint(const char *b)
{
	int s, a = 0, num = 0;

	if (b == NULL)
		return (0);
	for (s = (strlen(b) - 1) ; s >= 0 ; s--)
	{
		if (b[s] == '1' || b[s] == '0')
		{
			num += ((b[s] - '0') << a);
			a++;
		}
		else
			return (0);
	}
	return (num);
}
