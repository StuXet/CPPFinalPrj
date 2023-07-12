#include "Authenticator.h"

Authenticator::Authenticator(Database _database) : database(_database) {}

User* Authenticator::CheckID(std::string id)
{
	return database.userDatabase->GetUser(id);
}