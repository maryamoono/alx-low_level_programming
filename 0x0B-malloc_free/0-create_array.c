#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creat wgat i can 
 * @c: craxk in the line
 * @size: i dont wnhd
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
    unsigned int m;
    char *y;

    if (size == 0)
    {
	    return (NULL);
    }

    y = malloc(sizeof(c) * size);

    if (y == 0)
	 return (NULL);
    m = 0;
    while (m < size)
    {
	    m++;
            y[m] = c;
    }
    return (y);
}

