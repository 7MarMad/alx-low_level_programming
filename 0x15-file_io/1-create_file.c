#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creating a file a filling it with text
 * @filename: file name for the new creted file
 * @text_content: text to be writen in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, i, len = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			len++;
	}
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);

	return (1);
}
