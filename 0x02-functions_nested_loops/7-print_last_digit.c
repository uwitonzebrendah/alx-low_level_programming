#include "main.h"

/**
 *  * print_last_digit - prints the last digit of a numer.
 *   * @n: digit to find the last place of.
 *    * Return: The last digit.
 */
int print_last_digit(int n)
{
	int lastdigit;
	lastdigit = n % 10;

	if ( lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
