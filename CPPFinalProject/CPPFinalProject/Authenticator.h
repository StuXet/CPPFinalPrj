#pragma once

#include "Database.h"
#include <string>

class Authenticator
{
public:
	Authenticator(Database _database);
	bool CheckID(std::string id);

private: 
	Database database;
};

