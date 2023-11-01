#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer of array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int p, q, r = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			len++;
	}
	len += ac;

	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
		{
			aout[r] = av[p][q];
			r++;
		}
		if (aout[r] == '\0')
		{
			aout[r++] = '\n';
		}
	}
	return (aout);
}
