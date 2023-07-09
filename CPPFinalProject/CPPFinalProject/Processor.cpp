#include "Processor.h"

Processor::Processor() 
{
	dataCommunicator = new DataCommunicator(*database);
	authenticator = new Authenticator(*database);
	database = new Database();
	dashboard = new Dashboard();
}

Processor::~Processor()
{
	delete dataCommunicator;
	delete authenticator;
	delete database;
	delete dashboard;
}




