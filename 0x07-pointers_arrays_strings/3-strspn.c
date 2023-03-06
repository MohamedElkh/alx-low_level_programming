#include "main.h"

/**
 *  _strspn - a function that gets the length of a prefix substring.
 *  @s: the first pointer .
 *  @accept: the second pointer .
 *
 *  Description: a function that gets the length of a prefix substring.
 *  Return: the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, x, val;

	val = 0;

	for (a = 0; s[a] != '\0'; a++)
	{

		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[a])
			{
				val++;
				break;
			}
		}
		 if (accept[x] != s[a])
                        {
                                break;
                        }

	}
	return (val);


}
