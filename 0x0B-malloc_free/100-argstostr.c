#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: the character to be checked
 * @av: the pointer to be checked.
 *
 * Description: a function that concatenates all the arguments
 * of your program.
 * Return: new string or fails.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, x = 0,val = 0;
	char *name;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			val++;
		}
		val++;
	}
	}
	val++;
	name = malloc(val * sizeof(char));
	if (name == NULL)
	{
		return (NULL);
	}		
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			name[x] = *(*(av + i) + j);
			x++;
		}
		name[x] = '\n';
		x++;
	}
	x++;
	name[x] = '\0';
	return (name);
}

