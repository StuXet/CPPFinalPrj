#pragma once
#include<iostream>
#include "User.h"

class UserFormatConverter
{
public:
	User FileToObject(std::string file);
	void ObjectToFile(User user);

};