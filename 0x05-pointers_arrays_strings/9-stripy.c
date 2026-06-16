#include "main.h"

/**
 * _strcpy - Funtion copy src to dest
 * Description: The string pointed to by 'src' (source) is copy to
 *		the address pointed by 'dest' (destination).
 *		'dest' should point to a valid writable address
 *		with sufficient space to hold source.
 *
 * @dest: Pointer to the destination
 * @src: Pointer to the source
 *
 * Return: 'dest' after the copy
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *_strcpy(char *dest, char *src)
{
	long i = 0;

	if (src == NULL)
		return (dest);

	for (i = 0; src[i] | dest[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
