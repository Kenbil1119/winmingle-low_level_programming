#include "main.h"

/**
 * _strlen - Read and Return the length of a string
 * Description: Excluding the terminator character '\0'
 *
 * @s: Pointer to the string address
 *
 * Return: The length of the string
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _strlen(char *s)
{
	int i, length = 0;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
