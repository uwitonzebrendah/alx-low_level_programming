#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - prints string before main function
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,%s",
			"\nI bore my house upon my back!\n");
}
