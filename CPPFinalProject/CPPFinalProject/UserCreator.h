#pragma once
#include <string>
#include "User.h"

using namespace std;

class UserCreator
{
public:
	User* CreateUser(string _id, string _firstName, string _lastName, int subTime);
};