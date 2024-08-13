#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_c;
	int mletters;
	int rwr;

	if (!filename)
		return (-1);

	file_c = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_c == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (mletters = 0; text_content[mletters]; mletters++)
		;
	rwr = write(file_c, text_content, mletters);

	if (rwr == -1)
		return (-1);
	close(file_c);

	return (1);
}
