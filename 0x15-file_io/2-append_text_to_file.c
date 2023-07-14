#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - adding text in the end of the file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i, len = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		len++;
	wr = write(op, text_content, len);
	if (wr == -1)
		return (-1);
	close(op);

	return (1);
}
