#include "Program.h"

Program::Program() : prc(new Processor())
{
}

void Program::Run()
{
	while (true)
	{
		switch (state)
		{
		case CheckID:
			CheckIDLogic();
			break;
		case UserOptions:
			UserOptionsLogic();
			break;
		case UserdoesntExist:
			UserDoesntExistLogic();
			break;
		case AddUser:
			AddUserLogic();
			break;
		case RemoveUser:
			RemoveUserLogic();
			break;
		case EditUser:
			EditUserLogic();
			break;
		default:
			break;
		}
	}
}

void Program::CheckIDLogic()
{
	prc->DisplayText("Enter user ID: ");
	currentUserID = prc->GetInputString();

	if (prc->CheckUser(currentUserID))
	{
		state = UserOptions;
	}
	else
	{
		state = UserdoesntExist;
	}
}

void Program::UserOptionsLogic()
{
	while (true)
	{
		prc->DisplayText("Enter:\n1 - Remove user \n2 - Edit user \n3 - \Continue");
		int res = prc->GetInputInt();

		if (res == 1)
		{
			state = RemoveUser;
			break;
		}
		else if (res == 2)
		{
			state = EditUser;
			break;
		}
		else if (res == 3)
		{
			state = CheckID;
			prc->UserEnteredFacility(currentUserID);
			break;
		}
		prc->DisplayText("Invalid option, try again");
	}

}

void Program::UserDoesntExistLogic()
{
	while (true)
	{
		prc->DisplayText("Enter: \n1 - Continue \n2 - Add user");
		int res = prc->GetInputInt();

		if (res == 1)
		{
			state = CheckID;
			break;
		}
		else if (res == 2)
		{
			state = AddUser;
			break;
		}
		prc->DisplayText("Invalid option, try again");
	}
}

void Program::AddUserLogic()
{
	prc->DisplayText("Enter first name: ");
	string fName = prc->GetInputString();

	prc->DisplayText("Enter last name: ");
	string lName = prc->GetInputString();

	prc->DisplayText("Enter subscription time in months: ");
	int subTime = prc->GetInputInt();

	prc->AddUser(currentUserID, fName, lName, subTime);

	state = CheckID;
}

void Program::RemoveUserLogic()
{
	prc->RemoveUser(currentUserID);

	state = CheckID;
}

void Program::EditUserLogic()
{
	prc->DisplayText("Enter new info to user " + currentUserID + "\nif you dont want to change a specific part, press enter");

	prc->DisplayText("Enter new ID: ");
	string newID = prc->GetInputString();

	prc->DisplayText("Enter new first name: ");
	string newFName = prc->GetInputString();

	prc->DisplayText("Enter new last name: ");
	string newLName = prc->GetInputString();

	prc->DisplayText("Enter subsription time addatice (can be negative): ");
	int subTimeAdd = prc->GetInputInt();

	prc->EditUser(currentUserID, newID, newFName, newLName, subTimeAdd);
	
	state = CheckID;
}
