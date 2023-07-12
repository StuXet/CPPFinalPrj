#pragma once
#include "UserDataBase.h"
#include "UserCreator.h"

class Database
{
public:

	UserDatabase* userDatabase;
	UserCreator* userCreator;
	
	Database();
	~Database();
};

