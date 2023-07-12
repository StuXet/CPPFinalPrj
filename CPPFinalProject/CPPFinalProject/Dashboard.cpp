#include "Dashboard.h"
#include <iostream>
#include <string>

using namespace std;

void Dashboard::DisplayUesrInfo(User* user)
{
	cout << "\nUser ID: " << user->id;
	cout << "\nUser full name: " << user->firstName << " " << user->lastName;
	string startDatestr = to_string(user->startDate->day) + "/" + to_string(user->startDate->month) + "/" + to_string(user->startDate->year);
	string endDatestr = to_string(user->endDate->day) + "/" + to_string(user->endDate->month) + "/" + to_string(user->endDate->year);
	cout << "\nUser subscription time: " << startDatestr << " - " << endDatestr;
	cout << "\nUser facility entries: " << to_string(user->entriesCount);
	//delete user;
}

void Dashboard::UserDoesntExists(std::string id)
{
	cout << "\nUser with ID of: " << id << " does not exist";
}

void Dashboard::UserCreated(User* user)
{
	cout << "\nUser created successfuly";
	cout << "\nNew user info:";
	DisplayUesrInfo(user);
}

void Dashboard::UserRemoved(User* user)
{
	cout << "\nUser removed successfuly";
	cout << "\nRemoved user info:";
	DisplayUesrInfo(user);
}

void Dashboard::DisplayText(std::string text)
{
	cout << "\n" << text;
}

int Dashboard::GetIntInput()
{
	int n;
	while (!(cin >> n)) 
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Invalid input. Please enter an integer: ";
	}
	return n;
}

string Dashboard::GetStringIput()
{
	string s;
	cin >> s;
	return s;
}