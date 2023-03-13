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
int a, x, z, y;
char *name;
a = 0, x = 0, z = 0, y = 0;

if (s1 == NULL)
{
s1 = "";
}
else if (s1 != NULL)
{
while(s1[a] != '\0')
a++;
}
if (s2 == NULL)
{
s2 = "";
}
else if (s2 != NULL)
{
while(s2[x] != '\0')
x++;
}
z = a + x;
name = malloc((sizeof(char) * z) + 1);

if (name == NULL)
return (NULL);
x = 0;

  while (y < z)
  {
	  if (y <= a)
		  name[y] = s1[y];
	  if (y >= a)
	  {
		  name[y] = s2[x];
		  x++;
	  }
	  y++;
  }
  name[y] = '\0';
  return (name);

}
