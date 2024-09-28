#include "main.h"
/**
 * _isupper -function for checking uppercase letters
 * @c: the char to be check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
