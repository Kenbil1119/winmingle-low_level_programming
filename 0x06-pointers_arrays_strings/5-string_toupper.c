#include "main.h"

/**
 * string_toupper - convert lowercase letter in a writable string
 *	to uppercase letter
 *
 * @str: Pointer to a writable string address like 'var_name[size_of_string]'
 *	not a pointer like '*var_name'.
 *
 * Return: pointer to string after conversion
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

char *string_toupper(char *str)
{
	unsigned i;

	if (str == NULL)
		return (str);

	for (i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');

	return (str);
}
