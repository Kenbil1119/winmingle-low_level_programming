#include "main.h"

/**
 * _strcat - Append source string to destination string
 *
 * @dest: Pointer to writable destination
 * @src: Pointer to the source to be concatenated
 *
 * Return: Pointer to the modified destination
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char* _strcat(char *dest, char *src)
{
	int i, j, length_dest;

	if (src == NULL || dest == NULL)
		return(NULL);

	for (length_dest = 0; dest[length_dest]; length_dest++);

	for(i = 0, j = length_dest; src[i]; i++, j++)
		dest[j] = src[i];
	dest[j] = '\0';

	return(dest);
}
