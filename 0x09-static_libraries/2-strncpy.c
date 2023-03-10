#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the pointer to be checked.
 * @src: the second pointer to be checked.
 * @n: the character to be checked.
 *
 * Description: Write a function that copies a string.
 * Return: the result of dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        i = 0;
        while (i < n && src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }
        return (dest);
}
