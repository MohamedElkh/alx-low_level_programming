#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * @void: nothing .
 *
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 Always.
 */

int main(void)
{
int a;
long int i, j;

a = 0;
i = 1, j = 2;

while ( a < 50)
{
if (a == 0)
{
printf("%ld", i);
}
else if (a == 1)
{
printf(", %ld", j);
}
else 
{
j += i;
i = j - i;
printf(", %ld", j);	
}	
++a;
}
printf("\n");
return (0);
}
