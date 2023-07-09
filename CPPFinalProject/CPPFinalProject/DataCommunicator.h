#pragma once

#include <string>
#include "User.h"
#include "Database.h"

class DataCommunicator
{
private:
	Database database;

public:
	DataCommunicator(Database _database);

	bool AddUser(std::string userID);
	bool RemoveUser(std::string userID);
	void EditUser(std::string userID);
};

