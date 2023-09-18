#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 *  * rev_string - awdwdw
 *   *
 *    *@s: 1
 *      *
 *       *Return: No
 */
void rev_string(char *s)
{
	int end = strlen(s) - 1;
	int start = 0;
	char tmp;

	while (start < end)
	{
		tmp = s[end];
		s[end] = s[start];
		s[start] = tmp;
		start++;
		end--;
	}
}
