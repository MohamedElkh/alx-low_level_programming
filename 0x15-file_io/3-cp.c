#include "main.h"

/**
 * _copyfile - function to us
 * @src: the character to be checked
 * @des: the character to be checked
 *
 * Return: nothing.
 */

void _copyfile(const char *src, const char *des)
{
	char *buf[1024];
	int of, tf, rea;

	of = open(src, O_RDONLY);
	if (!src || of == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tf = open(des, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rea = read(of, buf, 1024)) > 0)
	{
		if (write(tf, buf, rea) != rea || tf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", des);
			exit(99);
		}
	}
	if (rea == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(of) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", of);
		exit(100);
	}
	if (close(tf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tf);
		exit(100);
	}
}

/**
 * main - function to use
 * @argc: the count of arguments
 * @argv: the character to be checked
 *
 * Return: the result.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from_to\n");
		exit(97);
	}
	_copyfile(argv[1], argv[2]);
	exit(0);

}
