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
	/* Destructor is empty because we get exit code 0xC0000005
	 * general protection fault error (access violation)
	*/
}