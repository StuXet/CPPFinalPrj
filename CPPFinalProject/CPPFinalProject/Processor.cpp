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




