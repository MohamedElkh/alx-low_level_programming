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
 * create_file - a function that creates a file.
 * @filename: the character to be checked
 * @text_content: the character to be checked.
 *
 * Return: the result.
 */

int create_file(const char *filename, char *text_content)
{
	int fx;

	if (filename == NULL)
	{
		return (-1);
	}

	fx = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fx == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write(fx, text_content, _count(text_content));
	}

	close(fx);
	return (1);

}
