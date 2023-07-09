#pragma once

#include "Database.h"
#include <string>

class Authenticator
{
public:
	Authenticator(Database _database);

	User* CheckID(std::string id);

private: 
	Database database;
};

