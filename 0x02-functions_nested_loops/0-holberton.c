#include "main.h"

/**
 * main-Entry point
 *
 * Return:Always 0 (Suceess)
 */
int main(void)
{
		char c[] = "Holberton";
		int i;

		for (i = 0; i < 9; i++)
		{
			_putchar(c[i]);
		}
		_putchar('\n');
		return (0);
}
