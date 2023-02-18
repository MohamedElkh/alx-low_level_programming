#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits.
 * @void: nothing .
 *
 * Description: prints all possible different combinations of three digits.
 * Return: 0 Always .
 */

int main(void)
{
        int i , j, q;

        for (i ='0' ; i < '9'; i++){

                for ( j = i +1 ; j <= '9'; j++){

                        for ( q = j +1 ; q <= '9' ; q ++){

                                if ((i != j) != q)
                                putchar(i);
                                putchar(j);
                                putchar(q);
                                if ( i == '7' && q == '9')
                                continue;
                                putchar(',');
                                putchar(' ');
                        }
                }
                
        }
	putchar('\n');
        return (0);
}
