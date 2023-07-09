#include "UserDataBase.h"
#include <iostream>
#include "UserCreator.h"
#include <cstdio>
#include <fstream>

//searches and returns a user in users by id
User* UserDatabase::GetUser(std::string id)
{
    std::string fileName = id + ".txt";
    std::ifstream file(fileName);
    if (file) {
        std::cout << "User with ID " << id << " exists." << std::endl;

        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();
        return nullptr;
    }
    else {
        std::cout << "User with ID " << id << " does not exist." << std::endl;
        return nullptr;
    }
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
    std::string id;
    std::cout << "Enter ID you want to delete: ";
    std::getline(std::cin, id);

    std::string fileName = id + ".txt";
    if (std::remove(fileName.c_str()) != 0) {
        std::cout << "Failed to delete the file." << std::endl;
    }
}
