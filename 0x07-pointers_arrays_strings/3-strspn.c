#include "main.h"

/**
 * _strspn - a function that gets the length.
 * @s: the first pointer .
 * @accept: the second pointer .
 *
 * Description: a function that gets the length
 * of a prefix substring.
 * Return: the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int val = 0;

while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
val++;
break;
}
else if (accept[i + 1] == '\0')
{
return (val);
}
}
s++;
}
return (val);

}
