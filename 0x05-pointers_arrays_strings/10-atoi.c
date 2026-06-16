#include "main.h"

/**
 * _atoi - Convert string to digit
 * Description: The function only returns any form of digit in the string.
 *		No other character except negative sign if it come first.
 *
 * @s: Pointer to string address
 *
 * Return: The converted digit 'num'
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int _atoi(char *s)
{
	int i, j, digit[1024] = {0}, place = 0;
	int num = 0;

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		if ((s[i] - '0' >= 0) && (s[i] - '0' <= 9))
		{
			digit[j] = s[i] - '0';
			place += 1;
			if (place == 1)
				num = digit[j] * place;
			else
			{
				num *= 10;
				num += digit[j];
			}
		}
		else
		{
			j -= 1;
			continue;
		}
	}
	if (s[0] == '-')
		num = -num;

	return (num);
}
