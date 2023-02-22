#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 * @void: nothing .
 *
 * Description: function that prints the 9 times table, starting with 0
 * Return: nothing.
 */

void times_table(void)
{
int a, i, j, x, q;

for (a = 0; a <= 9; a++)
{
for (i = 0; i <= 9; i++)
{
j = a * i;
if (j > 9)
{
x = j % 10;
q = (j - x) / 10;
_putchar(44);
_putchar(32);
_putchar(q  + '0');
_putchar(x + '0');
}
else
{
if (i != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(j + '0');
}
}
_putchar('\n');
}
}
