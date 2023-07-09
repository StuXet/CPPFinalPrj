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

	bool AddUser(string _id, string _firstName, string _lastName, Date startDate, int subTime);
	bool RemoveUser(std::string userID);
	void EditUser(std::string userID, string* newID, string* newFirstName, string* newLastName, Date* newStartDate, int* subTimeAddative);
};

