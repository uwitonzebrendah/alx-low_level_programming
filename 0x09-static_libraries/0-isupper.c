#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: checks for uppercase characters
 * Return: 1 (success) Else, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
