#include "Processor.h"

Processor::Processor()
{
}

DataCommunicator Processor::GetDataCommunicator()
{
	return DataCommunicator();
}

Authenticator Processor::GetAuthenticator()
{
	return Authenticator();
}

Database Processor::GetDatabase()
{
	return Database();
}

Dashboard Processor::GetDashboard()
{
	return Dashboard();
}
