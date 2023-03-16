#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - a function that reallocates a memory block
 * @ptr: the pointer to be checked
 * @old_size: the character to be checked
 * @new_size: the character to be checked
 *
 * Return: the result.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int x;
char *val;

if (old_size ==  new_size)
return (ptr);

if (ptr == NULL)
{
val = malloc(new_size);

if (val == NULL)
return (NULL);

return (val);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
val = malloc(new_size);

if (val == NULL)
return (NULL);

x = 0;
while (x < old_size && x < new_size)
{
val[x] = ((char *) ptr)[x];
x++;
}
free(ptr);
return (val);
}
