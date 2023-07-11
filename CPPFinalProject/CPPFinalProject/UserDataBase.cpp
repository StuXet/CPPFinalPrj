#include "UserDataBase.h"
#include "UserFormatConverter.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iterator>

namespace fs = std::filesystem;


//searches and returns a user in users by id
User* UserDatabase::GetUser(std::string id)
{
	std::ifstream in_file("users\\" + id + ".txt");
	std::string info(std::istreambuf_iterator<char>(in_file), (std::istreambuf_iterator<char>()));
	User curUser = UserFormatConverter::FileToObject(id, info);
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
			users.erase(users.begin() + i);
			break;
		}
	}
	return GetUser(users[i]->id) != nullptr;

}
