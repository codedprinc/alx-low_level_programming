#include "main.h"

/**
 * read_textfile - reads a text file and prints it to posix stdout
 * @filename: poointer to filename.
 * @letters:number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	char buffer[1024];
	ssize_t b_r;
	ssize_t w_r;

	f_d = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}

	if (f_d == -1)
	{
		return (0);
	}

	b_r = read(f_d, buffer, letters);
	w_r = write(STDOUT_FILENO, buffer, b_r);

	if (w_r == -1)
	{
		return (0);
	}

	return (w_r);
}
