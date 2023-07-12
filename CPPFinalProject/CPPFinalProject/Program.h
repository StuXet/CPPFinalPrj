#pragma once
#include "Processor.h"

enum State {CheckID, UserOptions, UserdoesntExist, AddUser, RemoveUser, EditUser};

class Program
{
public:
	Program();
	void Run();
	
private:
	Processor* prc;
	State state = CheckID;
	std::string currentUserID;
	void CheckIDLogic();
	void UserOptionsLogic();
	void UserDoesntExistLogic();
	void AddUserLogic();
	void RemoveUserLogic();
	void EditUserLogic();
};

