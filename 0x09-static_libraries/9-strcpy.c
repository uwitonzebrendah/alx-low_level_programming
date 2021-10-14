#include "main.h"

/**
 * *_strcpy - copies the string pointed out by src
 * @dest: string
 * @src: string
 * Description: copy the string pointed to by src
 * to the buffer pointed to by dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
