#include "main.h"

/**
 * 
 */

unsigned _atoi(char *s)
{
	int i, j = 0, convt[100] = {0};
	unsigned num = 0;
	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		if ((s[i] - '0' >= 0) && (s[i] - '0' <= 9))
		{
			convt[j] = s[i] - '0';
			power_10
		} else {
			j -= 1;
			continue;
		}
	}
	ptr_convt = conv;
	num = *ptr_convt;

	return (num);
}

int main(void)
{
	char *str = "012abc345CDE678F9";
	int convt = _atoi(str);

	printf("%s is: %d after convtertion\n", str, conv);

	return (0);
}
