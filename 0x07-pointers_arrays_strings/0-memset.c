#include "main.h"

/**
 * _memset - Set 'n' bytes of 's' to 'b'
 *
 * @s: Pointer to array of memories
 * @b: Constant character to fill the memory
 * @n: Number of memory to modify
 *
 * Return: Pointer to modify memories
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned i;

	for (i = 0; i < n; i++)
		s[i] = (unsigned)b;

	return (s);
}
