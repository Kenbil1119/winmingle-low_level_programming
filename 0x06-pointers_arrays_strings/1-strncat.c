#include "main.h"

/**
 * _strncat - Append 'n' byte(s) from source string to destination string
 *
 * @dest: Pointer to writable destination
 * @src: Pointer to the source to be concatenated
 * @n: Number of byte(s) to copy
 *
 * Return: Pointer to the modified destination
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char* _strncat(char *dest, char *src, int n)
{
	int i, j, length_dest;

	if (src == NULL && dest != NULL)
		return (dest);
	if (src != NULL && dest == NULL)
		return (src);
	
	if (src == NULL && dest == NULL)
		return (NULL);

	for (length_dest = 0; dest[length_dest]; length_dest++);

	for (i = 0, j = length_dest; i < n; i++, j++)
	{
		if (!(src[i]))
			break;
		dest[j] = src[i];
	}
	dest[j] = '\0';

	return (dest);
}
