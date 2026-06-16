#include "main.h"

/**
 * _strspn - Check every character of 's' if it is acceptable with 'accept'.
 * The function stop checking on the first encounter that do not match 'accept'
 *
 * @s: Pointer to string/buffer in check
 * @accept: Pointer to prefix/buffer/substring request
 *
 * Return: Length of first match characters
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, match = 0;

	if (s == NULL || accept == NULL)
		return (0);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
			else
				match = 0;

		if (!(match))
			break;
	}
	return (i);
}
