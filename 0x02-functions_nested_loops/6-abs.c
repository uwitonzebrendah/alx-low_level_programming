#include "main.h"
/**
 *  * _abs - calculate the absolute value of the number from zero.
 *   * @c: the integer to be converted.
 *    * Return: absolute value of the input number.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
