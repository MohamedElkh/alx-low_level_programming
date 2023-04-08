#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: the file to use
 * @letters: the character to be checked
 *
 * Return: the result.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *value = malloc(sizeof(char) * letters);
	int x, rea, wri;

	if (filename == NULL)
	{
		return (0);
	}

	x = open(filename, O_RDWR);

       if (x == -1)
       {
	       return (0);
       }
	rea = read(x, value, letters);

	if (rea == -1)
	{
		return (0);
	}
	wri = write(STDOUT_FILENO, value, rea);
	if (wri == -1)
		return (0);

	close(x);
	free(value);
	return (wri);

}
