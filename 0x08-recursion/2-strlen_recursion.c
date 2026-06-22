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

int _strlen_recursion(char *s)
{
	int length = 1;

	if (s == NULL || *s == '\0')
		return (0);

	return (length + _strlen_recursion(s + length));
}
