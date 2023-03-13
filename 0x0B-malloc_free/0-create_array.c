#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: the character to be checked.
 * @c: the character to be checked.
 *
 * Description: a function that creates an array of chars
 * Return: 0 Always.
 */

char *create_array(unsigned int size, char c)
{
unsigned int x;
char *name;

if (size == 0)
{
return (NULL);
}

name = malloc(size * sizeof(char));

if (name == NULL)
{
return NULL;
}
else
{
for (x = 0; x < size; x++)
{
name[x] = c;
}
}
return (name);

}
