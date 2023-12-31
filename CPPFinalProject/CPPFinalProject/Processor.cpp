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

bool Processor::CheckUser(std::string userID) 
{
	User* curUser = database->userDatabase->GetUser(userID);
	if (curUser != nullptr)
	{
		dashboard->DisplayUesrInfo(curUser);
		return true;
	}
	else
	{
		dashboard->UserDoesntExists(userID);
		delete curUser;
		return false;
	}
}

void Processor::AddUser(string _id, string _firstName, string _lastName, int subTime)
{
	User* newUser = database->userCreator->CreateUser(_id, _firstName, _lastName, subTime);
	database->userDatabase->AddUser(newUser);
	dashboard->UserCreated(newUser);
}

void Processor::RemoveUser(std::string userID)
{
	User* curUser = database->userDatabase->GetUser(userID);
	database->userDatabase->RemoveUser(curUser);
	dashboard->UserRemoved(curUser);
	delete curUser;
}

void Processor::EditUser(std::string userID, string newID, string newFirstName, string newLastName)
{
	dataCommunicator->EditUser(userID, newID, newFirstName, newLastName);
	
	string currentID = newID == "skip" ? userID : newID;
	dashboard->DisplayUesrInfo(database->userDatabase->GetUser(currentID));
}

void Processor::DisplayText(std::string text)
{
	dashboard->DisplayText(text);
}

void Processor::UserEnteredFacility(std::string userID)
{
	//open facility gate
	//removes original user and adds new modified version of the user
	User* curUser = database->userDatabase->GetUser(userID);
	database->userDatabase->RemoveUser(curUser);
	curUser->entriesCount++;
	database->userDatabase->AddUser(curUser);
	delete curUser;
}

int Processor::GetInputInt()
{
	return dashboard->GetIntInput();
}

std::string Processor::GetInputString()
{
	return dashboard->GetStringIput();
}