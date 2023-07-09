#include "Processor.h"

Processor::Processor() 
{
	database = new Database();
	authenticator = new Authenticator(*database);
	dashboard = new Dashboard();
	dataCommunicator = new DataCommunicator();
}

Processor::~Processor()
{
	delete dataCommunicator;
	delete authenticator;
	delete database;
	delete dashboard;
}




