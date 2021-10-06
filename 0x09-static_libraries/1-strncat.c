#include "main.h"
#include <stdio.h>

/**
 * _strncat - copies string of n bytes
 * @dest: string
 * @src: string
 * @n: int value for string bytes
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
