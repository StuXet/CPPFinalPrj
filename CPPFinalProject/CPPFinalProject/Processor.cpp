#include "Processor.h"

Processor::Processor() 
{
	database = new Database();
	dataCommunicator = new DataCommunicator(*database);
	authenticator = new Authenticator(*database);
	dashboard = new Dashboard();
}

Processor::~Processor()
{
	delete dataCommunicator;
	delete authenticator;
	delete database;
	delete dashboard;
}

void Processor::CheckUser(std::string userID) 
{
}


void Processor::AddUser(string _id, string _firstName, string _lastName, int subTime)
{
}

void Processor::RemoveUser(std::string userID)
{
}

void Processor::EditUser(std::string userID)
{
}


