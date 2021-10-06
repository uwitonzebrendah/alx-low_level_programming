#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @x: checks for the value of a number
 * Return: always 0 (success)
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
