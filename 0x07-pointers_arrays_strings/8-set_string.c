#include "main.h"

/**
 * set_string - Set Pointer to char pointer/buffer/string
 *
 * @s: Pointer to the address of a pointer
 * @to: Pointer to buffer/string
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void set_string(char **s, char *to)
{
	*s = to;
}
