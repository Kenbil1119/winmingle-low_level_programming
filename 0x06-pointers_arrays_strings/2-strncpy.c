#include "main.h"

/**
 * _strncpy - Funtion copy 'n' byte(s) of src to dest
 *
 * @dest: Pointer to the destination with sufficient and writable space
 * @src: Pointer to the source
 * @n: the size of bytes to copy (Number of elements)
 * 
 * Return: pointer to 'dest' after the copy
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *_strncpy(char *dest, char *src, int n)
{
	long i = 0, l_src;
	
	for (l_src = 1; src[l_src]; l_src++);

	if (src == NULL && dest != NULL)
                return (dest);
        if (src != NULL && dest == NULL)
                return (src);

        if (src == NULL && dest == NULL)
                return (NULL);


	for (i = 0; i < n; i++)
		dest[i] = src[i];
	if (n > l_src)
		dest[i] = '\0';

	return (dest);
}
