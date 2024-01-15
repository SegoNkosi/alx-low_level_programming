#include "main.h"

/**
 * _isalpha - this function checks for alphabetic character
 * @c: the checked character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
