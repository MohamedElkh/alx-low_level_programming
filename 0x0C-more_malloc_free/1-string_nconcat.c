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
unsigned int i = 0, a = 0, x = 0, j = 0;
char *value;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
	s2 = "";
while (s1[i] != '\0')
i++;
while (s2[a] != '\0')
a++;

if (n >= a)
{
x = i + a;
}
else
{
x = i + n;
}

value = malloc(sizeof(char) * x + 1);
if (value == NULL)
return (NULL);

a = 0;
while (j < x)
{
if (j <= i)
value[j] = s1[j];

if (j >= i)
{
value[j] = s2[a];
a++;
}
j++;
}
value[j] = '\0';
return (value);
}
