#include "main.h"

/**
 * main - Print date of the year
 * Description: Invoke print_remaining_days() to calculate
 *		day of the month to day of the year using convert_day(),
 *		and print the days and remaining of the year, input by user.
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int month = 0, day = 0, year = 0;
	char input_month[3], input_day[3], input_year[5];

	printf("Input the date: ");
	scanf("%02s %02s %04s", input_month, input_day, input_year);
	
	month = atoi(input_month);
	day = atoi(input_day);
	year = atoi(input_year);

	printf("\nDate: %02d/%02d/%04d\n", month, day, year);

	print_remaining_days(month, day, year);

	return (0);
	
}
