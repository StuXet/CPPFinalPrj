#include "Database.h"

Database::Database()
{
	userDatabase = new UserDatabase();
	userCreator = new UserCreator();
}

Database::~Database()
{
}
