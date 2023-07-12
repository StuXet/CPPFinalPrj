#pragma once
#include "Authenticator.h"
#include "Dashboard.h"
#include "DataCommunicator.h"
#include "Database.h"
#include <string>

class Processor
{

public:
    Processor();
    ~Processor();

    bool CheckUser(std::string userID);
    void AddUser(string _id, string _firstName, string _lastName, int subTime);
    void RemoveUser(std::string userID);
    void EditUser(std::string userID, string newID, string newFirstName, string newLastName, int subTimeAddative);
    void DisplayText(std::string text);
    void UserEnteredFacility(std::string userID);
    int GetInputInt();
    std::string GetInputString();
    
private:
    DataCommunicator* dataCommunicator;
    Authenticator* authenticator;
    Database* database;
    Dashboard* dashboard;
};