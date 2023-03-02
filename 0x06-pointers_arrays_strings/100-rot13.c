#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @q: the pointer to be checked.
 *
 * Description: a function that encodes a string using rot13.
 * Return: q .
 */

char *rot13(char *q)
{
int a, i;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; q[a] != '\0'; a++)
{
for (i = 0; in[i] != '\0'; i++)
{
if (q[a] == in[i])
{
q[a] = out[i];
break;
}
}
}
return (q);
}
