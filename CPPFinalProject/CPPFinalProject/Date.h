#pragma once
#include <string>

class Date
{
public:
	int day;
	int month;
	int year;
	std::string date_time;
	Date();

	void SetCustomDate(int _day, int _month, int _year);
	void print();
};
