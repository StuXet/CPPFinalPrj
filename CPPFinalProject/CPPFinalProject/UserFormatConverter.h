#pragma once
#include "User.h"
#include <string>

class UserFormatConverter
{
public:
	User FileToObject(std::string userTxtFile);
	std::string ObjectToFile(User userObject);
};

