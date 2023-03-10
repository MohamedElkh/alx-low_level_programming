#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: the first pointer to store the value in it.
 * @src: the second pointer to be copied.
 * @n: copies bytes from memory area.
 *
 * Description: a function that copies memory area.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
