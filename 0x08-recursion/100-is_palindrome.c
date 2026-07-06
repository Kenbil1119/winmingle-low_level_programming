#include "main.h"

int check_s(char *str, int first, int last);

/**
 * is_palindrome - Invoke check_s() function to check if a string pass "s"
 *		is a palindrome
 *
 * @s: Pointer to string
 *
 * Return: 1, if it is, else 0.
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (s == NULL)
		return (1);

	return (check_s(s, 0, len - 1));
}

/**
 * _strlen_recursion - Read and Return the length of a string
 * Description: Excluding the terminator character '\0'
 *
 * @s: Pointer to the string address
 *
 * Return: The length of the string
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _strlen_recursion(char *s)
{
        int length = 1;

        if (s == NULL || *s == '\0')
                return (0);

        return (length + _strlen_recursion(s + length));
}

/**
 * check_s - Check if characters from the first element
 *		match characters from the last element.
 *
 * @str: Pointer to string
 * @first: Parameter for the first element index
 * @last: Parameter for the last element index
 *
 * Return: 1, if match althrough, else, 0.
 *
 * Author: Usman Saheed
 */

int check_s(char *str, int first, int last)
{

	int check = str[first] == str[last];

	if (!(check))
		return (0);
	if (!(str[first]))
		return (1);

	return (check_s(str, first + 1, last - 1));
}
