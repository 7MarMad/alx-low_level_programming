#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reading info in a text and writing it to stdout
 * @filename: the file name from where we will get the text
 * @letters: how much char to write to stdout
 *
 * Return: returning the number of char that were writen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, readd, fd, let;
	char *string;

	if (filename == NULL)
		return (0);
	let = letters;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	string = malloc(letters + 1);

	readd = read(fd, string, letters);
/*
 *	if (readd < let && readd != 0)
 *	{
 *		free(string);
 *		return (0);
 *	}
 */
	n = write(STDOUT_FILENO, string, letters);
	if (n < let && n != 0)
	{
		free(string);
		return (0);
	}
	free(string);
	close(fd);

	return (n);
}
