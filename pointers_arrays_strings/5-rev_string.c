#include "main.h"

/**
 * rev_string - Reverse a mutable string
 *
 * @s: Pointer to a writable string address
 *
 * Author: Usman Saheed
 * Program: WimMingle Community C Training
 */

void rev_string(char *s)
{
	long i = 0, j, length = 0;
	char s_rev[1024];

	if (s == NULL)
		return;

	while (s[length])
	{
		length++;
	}

	for (i = length - 1, j = 0; i >= 0; i--, j++)
		s_rev[j] = s[i];
	s_rev[j + 1] = '\0';
	for (i = 0; i <= length; i++)
		s[i] = s_rev[i];
}
