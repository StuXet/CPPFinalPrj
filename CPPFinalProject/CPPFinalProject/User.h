#pragma once
#include <string>
#include "Date.h"

class User {
public:
	User();
	~User();

	std::string id;
	std::string firstName;
	std::string lastName;
	Date* startDate;
	Date* endDate;
	int entriesCount;
};