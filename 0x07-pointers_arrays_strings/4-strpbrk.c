#include "main.h"

/**
 * _strpbrk - Check for the first encounter byte of 'accept'
 *		in byte of the buffer pointed to by 's'.
 *
 * @s: Pointer to the buffer
 * @accept: Pointer to the specified bytes to check
 *
 * Return: Buffer from the first byte encounter. 0, if buffer is empty
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	int match;

	if (accept == NULL || s == NULL)
		return (0);

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			match = *s == accept[i];
			if (match)
				break;
		}
		if (match)
			break;
		else
			s += 1;
	}

	return (s);
}
