#include "main.h"

/**
 * leet - Function that Encrypt matching letters to a number
 *		in a string to create a code
 *
 * @s: Pointer to the  string source
 *
 * Return: The string after madification
 *
 * Author: Usman Saheed
 * Program: WinMingle Communtiy C Training
 */

char *leet(char *s)
{
	char str[11] = "AaEeOoTtLl";
	char code[11] = "4433007711";
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; str[j]; j++)
			if (s[i] == str[j])
			{
				s[i] = code[j];
				break;
			}

	return (s);
}
