#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first pointer to be checked
 * @s2: the second pointer to be checked
 * n: the character to be checked
 *
 * Description: a function that concatenates two strings.
 * Return: result Always.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, a = 0, x = 0, z = 0;
char *name;

if (s1 == NULL)
s1 = "";
while (s1[i] != '\0')
i++;
if (s2 == NULL)
s2 = "";

while (s2[a] != '\0')
a++;

        if (n >= a)
		x = i + a;
	else
		x = i + n;

        name = malloc((x * sizeof(char)) + 1);

        if (name == NULL)
                return (NULL);
        a = 0;

while (z < x)
{
if (z <= i)
{
name[z] = s1[z];
}
if (z >= i)
{
name[z] = s2[a];
a++;
}
z++;
}
name[z] = '\0';
return (name);

}
