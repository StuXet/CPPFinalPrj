#include "DataCommunicator.h"

DataCommunicator::DataCommunicator(Database _database) : database(_database)
{
}


//create and add a user to userDB using userCreator, return true if successful
bool DataCommunicator::AddUser(string _id, string _firstName, string _lastName, int subTime)
{
    User* newUser = database.userCreator->CreateUser(_id, _firstName, _lastName, subTime);
    database.userDatabase->AddUser(newUser);
    return database.userDatabase->GetUser(newUser->id) != nullptr;
}

//remove user from userDB return true if successful
bool DataCommunicator::RemoveUser(std::string userID)
{
    return database.userDatabase->RemoveUser(database.userDatabase->GetUser(userID));
}

//edit user info according to arguments, if argument is null dont apply it to the user
void DataCommunicator::EditUser(std::string userID, string newID, string newFirstName, string newLastName, int subTimeAddative)
{
    User* curUser = database.userDatabase->GetUser(userID);
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

    //curUser->endDate->month += subTimeAddative; ****TBI****
    delete curUser;
}
