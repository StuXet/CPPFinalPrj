#pragma once
#include <vector>
#include <string>
#include "User.h"

class UserDatabase
{
public:	
<<<<<<< Updated upstream
	User* GetUser(std::string id);
	void AddUser(User user);
=======
	User GetUser(std::string id);
	void AddUser(User* user);
>>>>>>> Stashed changes
	bool RemoveUser(User* user);
private:
	std::vector<User*> users;
};

