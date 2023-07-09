#include "UserDataBase.h"

#include <iostream>

#include "UserCreator.h"

//searches and returns a user in users by id
User* UserDatabase::GetUser(std::string id)
{
    return nullptr;
}

//adds a user to users. create the a user with userCreator 
void UserDatabase::AddUser(User& user)
{
    UserCreator userCreator;
    
    std::string id, firstName, lastName;
    Date startDate;
    int subTime = 0;
    
    std::cout << "Enter ID: ";
    std::getline(std::cin, id);

    User newUser = userCreator.CreateUser(id, firstName, lastName, startDate, subTime);
}

//searches and removes a user in users by id
void UserDatabase::RemoveUser(User* user)
{
}
