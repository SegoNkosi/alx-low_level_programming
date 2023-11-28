#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: the  name of the file
 * @text_content: the content
 *
 * Return: 1 if file exists, -1 if not or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_c;
	int mletters;
	int rwr;

	if (!filename)
		return (-1);

	file_c = open(filename, O_WRONLY | O_APPEND);

	if (file_c == -1)
		return (-1);

	if (text_content)
	{
		for (mletters = 0; text_content[mletters]; mletters++)
			;
		rwr = write(file_c, text_content, mletters);

		if (rwr == -1)
			return (-1);
	}

	close(file_c);

	return (1);
}
