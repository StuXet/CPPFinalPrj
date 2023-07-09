#pragma once

#include "Database.h"
#include <string>

class Authenticator
{
public:
	Authenticator(Database _database);
<<<<<<< Updated upstream
	void CheckID(std::string id);
=======
	User* CheckID(std::string id);
>>>>>>> Stashed changes

private: 
	Database database;
};

