#include "Date.h"
#include <ctime>
#include <iostream>

Date::Date()
{
	//sets date to system current date
	time_t now = time(0);
	tm ltm;
	localtime_s(&ltm, &now);
	day = ltm.tm_mday;
	month = ltm.tm_mon+1; //Months are 0-11 in tm struct
	year = 1900 + ltm.tm_year;
}