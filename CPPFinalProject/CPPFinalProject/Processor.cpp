#include "Processor.h"

Processor::Processor() 
{
	database = new Database();
	dataCommunicator = new DataCommunicator(*database);
	authenticator = new Authenticator(*database);
	dashboard = new Dashboard();
}

Processor::~Processor()
void Processor::CheckUser(std::string userID)
{
	delete dataCommunicator;
	delete authenticator;
	delete database;
	delete dashboard;
}


void Processor::AddUser(string _id, string _firstName, string _lastName, Date startDate, int subTime)
{
}


