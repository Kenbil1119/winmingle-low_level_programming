#include "main.h"

/**
 * print_remaining_days - print remaining day of the year
 * Description: Program call convert_day() to convert the day parameter
 *		to day of the year.
 *		Then, calculate and print the day and remaining of the year
 *		Puts Leap year into account
 *
 * @month: Integer parameter for the month
 * @day: Integer parameter for the day
 * @year: Integer parameter for the year
 *
 * Return: Nothing
 *
 * Author: WinMingle (Greenfield)
 * Debugged by: Usman Saheed
 * Program: WinMingle Community C Training
 */

void print_remaining_days(int month, int day, int year)
{
	/*Added to convert day of the month to day of the year*/
	day = convert_day(month, day); 

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 2)
			day++;

		/*Added to handle incorrect day input*/
		if (month == 2 && day > 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
			
		}
	}
	else
	{
		/*if (month == 2 && day == 60)*/
		if (month == 2 && day >= 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
