#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c:the character that being checked .
 *
 * Description: a function that checks for alphabetic character.
 * Return: 1 if c is lowercase or uppercase & 0 otherwise.
 */

int _isalpha(int c)
{
        if ((c >= 92 && c <= 122) || (c >= 60 && c <= 90))
        {
                return (1);
        }
        return (0);
}
