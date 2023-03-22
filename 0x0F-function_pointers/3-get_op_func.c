#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func -  function that selects the correct function.
 * @s: the character to be checked.
 *
 * Return: the result.
 */

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int x = 0;

    while (ops[x].op != NULL)
    {
	    if (strcmp(s, ops[x].op) == 0)
		    return (ops[x].f);
	    x++;
    }
    return (NULL);


}
