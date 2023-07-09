#pragma once

#include "Authenticator.h"
#include "Dashboard.h"
#include "DataCommunicator.h"
#include "Database.h"
#include <string>

class Processor
{
private:
    DataCommunicator* dataCommunicator;
    Authenticator* authenticator;
    Database* database;
    Dashboard* dashboard;

public:
    Processor();
    ~Processor();


    void CheckUser(std::string userID);
    void AddUser(string _id, string _firstName, string _lastName, Date startDate, int subTime);
    void RemoveUser(std::string userID);
    void EditUser(std::string userID);

};
