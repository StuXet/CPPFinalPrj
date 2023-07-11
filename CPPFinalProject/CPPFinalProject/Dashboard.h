#pragma once

#include "User.h"
#include <string>

class Dashboard
{
public:
	void DisplayUesrInfo(User* user);
	void UserDoesntExists(std::string id);
	void UserCreated(User* user);
	void UserRemoved(User* user);
	void DisplayText(std::string text);
	int GetIntInput();
	std::string GetStringIput();
};

