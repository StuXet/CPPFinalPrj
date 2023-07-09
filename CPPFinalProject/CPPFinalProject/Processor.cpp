#include "Processor.h"

Processor::Processor()
{
}

DataCommunicator Processor::GetDataCommunicator()
{
	return DataCommunicator();
}

<<<<<<< Updated upstream
Authenticator Processor::GetAuthenticator()
{
	return Authenticator();
}
=======
void Processor::CheckUser(std::string userID)
{
}

void Processor::AddUser(string _id, string _firstName, string _lastName, Date startDate, int subTime)
{
}

void Processor::RemoveUser(std::string userID)
{
}

void Processor::EditUser(std::string userID)
{
}

>>>>>>> Stashed changes

Database Processor::GetDatabase()
{
	return Database();
}

Dashboard Processor::GetDashboard()
{
	return Dashboard();
}
