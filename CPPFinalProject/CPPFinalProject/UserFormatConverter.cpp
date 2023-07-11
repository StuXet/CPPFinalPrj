#include "UserFormatConverter.h"
#include <fstream>
#include <sstream>

User UserFormatConverter::FileToObject(std::string fileID)
{
    User newUser;
    newUser.id = fileID;

    std::ifstream inFile(fileID);
    if (!inFile) return newUser;

    std::string line;

    if (std::getline(inFile, line)) newUser.firstName = line;
    if (std::getline(inFile, line)) newUser.lastName = line;
    //--START DATE--//
    if (std::getline(inFile, line))
    {
        std::stringstream ss(line);
        if (!(ss >> newUser.startDate->day)) newUser.startDate->day = 0;
    }
    if (std::getline(inFile, line))
    {
        std::stringstream ss(line);
        if (!(ss >> newUser.startDate->month)) newUser.startDate->month = 0;
    }
    if (std::getline(inFile, line))
    {
        std::stringstream ss(line);
        if (!(ss >> newUser.startDate->year)) newUser.startDate->year = 0;
    }
    //--END DATE--//
    if (std::getline(inFile, line))
    {
        std::stringstream ss(line);
        if (!(ss >> newUser.endDate->day)) newUser.startDate->day = 0;
    }
    if (std::getline(inFile, line))
    {
        std::stringstream ss(line);
        if (!(ss >> newUser.endDate->month)) newUser.startDate->month = 0;
    }
    if (std::getline(inFile, line))
    {
        std::stringstream ss(line);
        if (!(ss >> newUser.endDate->year)) newUser.startDate->year = 0;
    }

    inFile.close();

    return newUser;
}

void UserFormatConverter::ObjectToFile(User user)
{
}
