#include "main.h"
#include <stdio.h>

int _putchar(int c)
{
	if (c <= 0)
		return (EOF);
	putc(c, stdout);

	return (c);
}
