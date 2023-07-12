#pragma once
#include <string>
#include "Database.h"

class DataCommunicator
{
public:
	DataCommunicator(Database _database);

	bool AddUser(string _id, string _firstName, string _lastName, int subTime);
	bool RemoveUser(std::string userID);
	void EditUser(std::string userID, string newID, string newFirstName, string newLastName);
	
private:
	Database database;
};