#include "DataCommunicator.h"

DataCommunicator::DataCommunicator(Database _database) : database(_database)
{
}

bool DataCommunicator::AddUser(string _id, string _firstName, string _lastName, Date startDate, int subTime)
{
    return false;
}

bool DataCommunicator::RemoveUser(std::string userID)
{
    return false;
}

void DataCommunicator::EditUser(std::string userID)
{
}
