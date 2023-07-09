#include <iostream>
#include <fstream>
#include "UserCreator.h"

using namespace std;

// Create and return a new user with the given arguments
User UserCreator::CreateUser(string _id, string _firstName, string _lastName, Date startDate, int subTime)
{
    string fileName = _id + ".txt";
    ofstream outputFile(fileName);

    if (outputFile.is_open()) {
        cout << "Enter first name: ";
        getline(cin, _firstName);
        outputFile << _firstName << endl;

        cout << "Enter last name: ";
        getline(cin, _lastName);
        outputFile << _lastName << endl;

        cout << "Enter date: ";
        string date;
        getline(cin, date);
        outputFile << date << endl;

        cout << "Enter subscription time: ";
        cin >> subTime;
        outputFile << subTime << endl;

        outputFile.close();
    }
    else {
        cout << "Error creating file." << endl;
    }

    return User();
}
