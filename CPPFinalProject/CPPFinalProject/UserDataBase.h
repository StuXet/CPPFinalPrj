#pragma once
#include <vector>
#include <string>
#include "User.h"

class UserDatabase
{
public:	
	User GetUser(std::string id);
	void AddUser(User user);
	bool RemoveUser(User* user);
private:
	std::vector<User*> users;
};

