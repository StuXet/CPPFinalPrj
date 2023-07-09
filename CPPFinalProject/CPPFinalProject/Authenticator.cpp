#include "Authenticator.h"


Authenticator::Authenticator(Database _database) : database(_database)
{
}

bool Authenticator::CheckID(std::string id)
{
	return false;
}
