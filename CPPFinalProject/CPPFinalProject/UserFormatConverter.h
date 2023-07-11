#pragma once
#include<iostream>
#include "User.h"

static class UserFormatConverter
{
public:
	static User FileToObject(std::string fileID);
	static User FileToObject(std::string fileID, std::string fileContent);
	static std::string ObjectToFile(User user);

};