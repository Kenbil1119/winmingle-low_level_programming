#include "main.h"

/**
 * cap_string - Capitalize first letter of every word in the string pass
 *
 * @str: Pointer to the writable  string
 *
 * Return: pointer back to the string after modification
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *cap_string(char *str)
{
	unsigned int i;
	int j;
	char break_word[3] = {' ', '\n', '\t'};

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		for (j = 0; j < 3; j++)
			if (str[i] == break_word[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= ('a' - 'A');

	return (str);
}
