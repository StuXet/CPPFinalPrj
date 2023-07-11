#pragma once
#include<iostream>
#include "User.h"

class UserFormatConverter
{
public:
	User FileToObject(std::string fileID);
	void ObjectToFile(User user);

};