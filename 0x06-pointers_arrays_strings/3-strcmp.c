#include "main.h"

/**
 * _strcmp - Compare character(byte by byte) of two strings
 *		until a different is encounter. CASE SENSITIVE.
 *
 * @s1: Pointer to the first string address
 * @s2: Pointer to the second string address
 *
 * Return: The different
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _strcmp(char *s1, char *s2)
{
	unsigned i;
	int diff = 0;

	if (s1 == NULL || s2 == NULL)
		return (diff);
	for (i = 0; !(diff) && s1[i] != '\0'; i++)
		diff = s1[i] - s2[i];

	return (diff);
}
