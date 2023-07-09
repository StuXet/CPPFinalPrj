#include "Date.h"
#include <ctime>
#include <iostream>
#pragma warning(disable : 4996)

Date::Date()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "%d-%m-%Y %H:%M:%S", ltm);
	date_time = std::string(buffer);
}

void Date::SetCustomDate(int _day, int _month, int _year) 
{
	day = _day;
	month = _month;
	year = _year;
}

void Date::print() {
	std::cout << "Current Date and Time: " << date_time << std::endl;
}