#include "main.h"

/**
 * _count - function to count the length
 * @n: the character to be checked.
 *
 * Return: the result.
 */

int _count(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * append_text_to_file - function that appends text at the end.
 * @filename: the character to be checked
 * @text_content: the content to be checked.
 *
 * Return: the result.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fx;

	if (!filename)
	{
		return (-1);
	}

	fx = open(filename, O_WRONLY | O_APPEND);

	if (fx == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (write(fx, text_content, _count(text_content)) == -1)
		{
			return (-1);
		}
	}
	close (fx);
	return (1);

}
