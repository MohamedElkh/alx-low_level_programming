#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @q: the pointer to be checked.
 *
 * Description: a function that encodes a string using rot13.
 * Return: the result of q.
 */

char *rot13(char *q)
{
int a, i;

char input [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output [] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; q[a] != '\0'; a++)
{
for (i = 0; input[i] != '\0'; i++)
{
if (q[a] == input[i])
{
q[a] = output[i];
break;
}
}
}
return (q);
}
