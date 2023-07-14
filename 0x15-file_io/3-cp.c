#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * error - function printing and exiting from program for errors
 *
 */
void error(void)
{
	dprintf(STDERR_FILENO, "cp file_from file_to\n");
	exit(97);
}

/**
 * error99 - special errors
 * @file_to: arg name of file
 *
 */
void error99(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * error98 - error for not being able to open or read the 1st file
 * @file_from: arg for file name
 *
 */
void error98(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * create_arr - creating an array for puting the text after reding from file
 * @str: str to work on
 *
 * Return: string
 */
char *create_arr(char *str)
{
	char *arr;

	arr = malloc(1024);
	if (arr == NULL)
		error99(str);
	return (arr);
}

/**
 * main - cpying what exit in a file to a new one
 *
 * @argc: number of args
 * @argv: array of pointers to files
 *
 * Return: 0 on Success, exit with a code on an error
 */
int main(int argc, char **argv)
{
	int op1, op2, wr, re, cl1, cl2;
	char *arr;

	if (argc != 3)
		error();
	arr = create_arr(argv[2]);
	op1 = open(argv[1], O_RDONLY);
	op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	re = read(op1, arr, 1024);
	do {
		if (re == -1 || op1 == -1)
		{
			free(arr);
			error98(argv[1]);
		}
		wr = write(op2, arr, re);
		if (wr == -1 || op2 == -1)
		{
			free(arr);
			error99(argv[2]);
		}
		re = read(op1, arr, 1024);
		op2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);

	cl1 = close(op1);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1);
		exit(100);
	}
	cl2 = close(op2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100);
	}
	free(arr);

	return (0);
}
