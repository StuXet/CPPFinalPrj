#pragma once
#include "UserDataBase.h"
#include "UserCreator.h"

class Database
{
public:
	Database();
	~Database();
	
	UserDatabase* userDatabase;
	UserCreator* userCreator;
};