#include "main.h"

/**
 * _isalpha - Check parameter
 * Description: Program check if the parameter pass is alphabet letter.
 *
 * @c: Integer parameter to be check. Compatible with char type.
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
}
