#include "Authenticator.h"

Authenticator::Authenticator(Database _database) : database(_database) {}

//use getUser of database, if db doesnt have a user with given id return null
User* Authenticator::CheckID(std::string id)
{
	return database.userDatabase->GetUser(id);
}