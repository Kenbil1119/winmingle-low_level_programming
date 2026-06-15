#include "main.h"

/**
 * _strchr - Check and return the memory of a buffer pointed
 *		to by 's' after the first occurrence of 'c'.
 *
 * @s: Pointer to a buffer
 * @c: Variable to check
 *
 * Return: Memories after the first occurrence else 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *_strchr(char *s, char c)
{
	unsigned i;

	if (s == NULL)
		return (0);
	if (c == 0)
		return(s);

	for (i = 0; s[i] != c && s[i]; i++);

	return (s + i);
}
