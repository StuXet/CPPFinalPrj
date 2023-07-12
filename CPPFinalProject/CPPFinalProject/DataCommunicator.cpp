#include "DataCommunicator.h"

DataCommunicator::DataCommunicator(Database _database) : database(_database) {}

bool DataCommunicator::AddUser(string _id, string _firstName, string _lastName, int subTime)
{
    User* newUser = database.userCreator->CreateUser(_id, _firstName, _lastName, subTime);
    database.userDatabase->AddUser(newUser);
    return database.userDatabase->GetUser(newUser->id) != nullptr;
}

bool DataCommunicator::RemoveUser(std::string userID)
{
    return database.userDatabase->RemoveUser(database.userDatabase->GetUser(userID));
}

void DataCommunicator::EditUser(std::string userID, string newID, string newFirstName, string newLastName)
{
    User* curUser = database.userDatabase->GetUser(userID);

    //removes original user and later adds new modified version of the user
    database.userDatabase->RemoveUser(curUser);
    if (newID != "skip")
    {
        curUser->id = newID;
    }
    if (newFirstName != "skip")
    {
        curUser->firstName = newFirstName;
    }
    if (newLastName != "skip")
    {
        curUser->lastName = newLastName;
    }
    database.userDatabase->AddUser(curUser);
    
    delete curUser;
}