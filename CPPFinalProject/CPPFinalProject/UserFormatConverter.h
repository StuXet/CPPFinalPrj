#pragma once
#include<iostream>
#include "User.h"

class UserFormatConverter
{
public:
	User FileToObject(std::ofstream file);
	void ObjectToFile(User user);

};

