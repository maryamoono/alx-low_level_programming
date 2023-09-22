#include "main.h"
#include "string.h"
/**
 * _strcmp - cmp will cheak
 * @s1: character number one
 * @s2: character number two
 * Return: lp
 */
int _strcmp(char *s1, char *s2)
{
        int s =0;
        lm = 0;

        while (lm == 0)
        {
                if (s1 + s == '\0' && s2 + s == '\0')
                        break;
                lm = (s1 + s - s2 + s);
                s++;
        }

        return (lm);
}
