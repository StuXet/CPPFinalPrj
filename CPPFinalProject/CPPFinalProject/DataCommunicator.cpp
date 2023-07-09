#include "DataCommunicator.h"

DataCommunicator::DataCommunicator(Database _database)
{
}

<<<<<<< Updated upstream
bool DataCommunicator::AddUser(std::string userID)
=======
//create and add a user to userDB using userCreator, return true if successful
bool DataCommunicator::AddUser(string _id, string _firstName, string _lastName, Date startDate, int subTime)
>>>>>>> Stashed changes
{
    return false;
}

//remove user from userDB return true if successful
bool DataCommunicator::RemoveUser(std::string userID)
{
    return false;
}

//edit user info according to arguments, if argument is null dont apply it to the user
void DataCommunicator::EditUser(std::string userID, string* newID, string* newFirstName, string* newLastName, Date* newStartDate, int* subTimeAddative)
{
}
