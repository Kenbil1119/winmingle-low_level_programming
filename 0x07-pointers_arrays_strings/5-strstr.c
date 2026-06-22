#include "main.h"

/**
 * _strstr - Find 'needle' in 'haystack' of memory
 *
 * @haystack: Pointer to stack of memories before terminator
 * @needle: Pointer to buffer/string to find in the stack
 *
 * Return: Pointer to the stack starting from the needle if found.
 *	'NULL' if needle is not found in the stack.
 *	'NULL' if 'haystack' or 'needle' pointed to NULL.
 *	'haystack' if needle is empty.
 *
 * Author: Usman Saheed
 * Program: WinMingle Communtiy C Training
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, len_needle, len_haystack;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	for (len_haystack = 0; haystack[len_haystack]; len_haystack++)
		;
	for (len_needle = 0; needle[len_needle]; len_needle++)
		;
	if (len_needle > len_haystack)
		return (NULL);

	for (; needle[i] && haystack[j]; j++)
		if (needle[i] == haystack[j])
			i++;
		else
			i = 0;

	if (i == 0)
		j = 0;

	return (haystack + j - i);
}
