#include "main.h"

/**
 * _isdigit - checks for numbers from 0 to 9
 * @c: checks for digits
 * Return: 1 (success) Else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
