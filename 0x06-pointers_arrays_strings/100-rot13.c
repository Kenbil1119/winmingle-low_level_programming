#include "main.h"

char rotate(char);

/**
 * rot13 - Change each letter of a string to its corresponding letter in
 *	the alphabet.
 * @str: Pointer to the string
 *
 * Return: Pointer to the string after modification
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *rot13(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str[i] = rotate(str[i]);

	return (str);
}

/**
 * rotate - Change letter to its corresponding 13th in the alphabet.
 * @c: The letter to be change
 *
 * Return: The letter after changed
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */
char rotate(char c)
{
	if (c >= 'a' && c <= 'z')
		if (c <= 'm')
			c += 13;
		else
			c -= 13;
	else
		if (c >= 'A' && c <= 'Z')
		{
			if (c <= 'M')
				c += 13;
			else
				c -= 13;
		}
	return (c);
}
