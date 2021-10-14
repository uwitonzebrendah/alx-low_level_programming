#include <stdio.h>
#include "main.h"

/**
 * _strncpy - code to copy string
 * @dest: string
 * @src: string
 * @n: string byte value
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
