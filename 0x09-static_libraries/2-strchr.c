#include "main.h"

/**
 * _strchr - Check for first occurrence of c
 * @c: character to replace
 * @s: Array
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
else
return ('\0');
}
