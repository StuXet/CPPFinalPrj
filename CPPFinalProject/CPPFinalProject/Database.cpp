#include "Database.h"

Database::Database()
{
	userDatabase = nullptr;
	userCreator = nullptr;
	
	userDatabase = new UserDatabase();
	userCreator = new UserCreator();
}

Database::~Database()
{
	if (userDatabase)
	{
		delete userDatabase;
		userDatabase = nullptr;
	}
	
	if (userCreator)
	{
		delete userCreator;
		userCreator = nullptr;
	}
}