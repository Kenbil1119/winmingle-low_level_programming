#include "main.h"

/**
 * _islower - Check for lowercase
 * Description: check and return if inputted character is lowercase
 * @c: Argument of type int. 
 *
 * Return: 1 if 'c' is lower, else return 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);

	return (0);
}
