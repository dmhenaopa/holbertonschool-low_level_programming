#include <stdio.h>
#include "holberton.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int acumulate_days;

	acumulate_days = 0;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		int i;
		int days_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		for (i = 0; i < month; i++)
		{
			acumulate_days = +days_month[i];
		}
		acumulate_days = +day;
		printf("Day of the year: %d\n", acumulate_days);
		printf("Remaining days: %d\n", 366 - acumulate_days);
	}

	else if
	{
		if (month == 2 && day >= 59)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			int i;
			int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

			for (i = 0; i < month; i++)
			{
				acumulate_days = +days_month[i];
			}
			acumulate_days = +day;
			printf("Day of the year: %d\n", acumulate_days);
			printf("Remaining days: %d\n", 365 - acumulate_days);
		}
	}
}
