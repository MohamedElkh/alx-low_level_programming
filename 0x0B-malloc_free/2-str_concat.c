#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the character to be checked.
 * @s2: the character to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: null on failure.
 */

char *str_concat(char *s1, char *s2)
{
int x, a, r, n;
char *name;

x = 0;
a = 0;
n = 0;
r = 0;

if (s1 == NULL)
{
s1 = "";
}
else
{
while (s1[x] != '\0')
{
x++;
}
}
if (s2 == NULL)
{
s2 = "";
}
else
{
while (s2[a] != '\0')
{
a++;
}
}
r = x + a;
name = malloc((r * sizeof(char)) + 1);
if (name == NULL)
{
return (NULL);
}
else
{
a = 0;
while (n < r)
{
if (n <= x)
{
name[n] = s1[n];
}
if (n >= x)
{
name[n] = s2[a];
a++;
}
n++;
}
}
name[n] = '\0';
return (name);
}
