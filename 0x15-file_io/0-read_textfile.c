#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the file to read
 * @letter: the number of letters it should read
 * Return: number of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_t;
	ssize_t lenr, lenw;
	char *buff;

	if (filename == NULL)
		return (0);
	file_t = open(filename, O_RDONLY);
	if (file_t == -1)
		return (0);
	buff = malloc(sizeof(char) + letters);
	if (buff == NULL)
	{
		close(file_t);
		return (0);
	}
	lenr = read(file_t, buff, letters);
	close(file_t);
	if (lenr == -1)
	{
		free(buff);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buff, lenr);
	free(buff);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
