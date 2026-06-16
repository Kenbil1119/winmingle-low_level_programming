#include "main.h"

/**
 * _memcpy - Copy 'n' bytes of 'src' to 'dest'
 *
 * @dest: Pointer to array of memory(destination)
 * @src: Pointer to source
 * @n: Number of memory in source to copy to destination
 *
 * Return: Pointer to modified memories
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (src == NULL)
		return (dest);

	for (i = 0; i < n; i++)
		dest[i] = (unsigned int)src[i];

	return (dest);
}
