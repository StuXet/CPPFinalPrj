#include "UserDataBase.h"

//searches and returns a user in users by id
User* UserDatabase::GetUser(std::string id)
{
	for (size_t i = 0; i < users.size(); i++)
	{
		if (users[i]->id == id)
		{
			return users[i];
		}
	}
	return nullptr;
}

//adds a user to users. create the a user with userCreator 
void UserDatabase::AddUser(User* user)
{
    users.push_back(user);
}

//searches and removes a user in users by id
bool UserDatabase::RemoveUser(User* user)
{
	int i = 0;
	for (i; i < users.size(); i++)
	{
		if (users[i] == user)
		{
			users.erase(users.begin()+i);
			break;
		}
	}
	return GetUser(users[i]->id) != nullptr;


}
