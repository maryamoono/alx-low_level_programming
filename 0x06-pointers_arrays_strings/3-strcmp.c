#include "main.h"
#include "string.h"
/**
 * _strcmp - cmp will cheak
 * @s1: character number one
 * @s2: character number two
 * Return: lo
 */
int _strcmp(char *s1, char *s2)
{
        int i =0;
        int lo = 0;

        while (lo == 0)
        {
                if ((s1 + i) = '\0' && (s2 + i) == '\0')
                        break;
                lo = (s1 + i) - i(2 + i);
                i++;
        }

        return (lo);
}
