#include "UserFormatConverter.h"
#include <fstream>
#include <sstream>
#include <vector>

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

User UserFormatConverter::FileToObject(std::string fileID, std::string fileContent)
{
	User tmpUser;

	std::vector<std::string> params;
	std::stringstream iss(fileContent);
	std::string line;

	while (std::getline(iss, line))
	{
		params.push_back(line);
	}

	tmpUser.id = fileID;

	tmpUser.firstName = params[0];
	tmpUser.lastName = params[1];
	tmpUser.startDate->day = std::stoi(params[2]);
	tmpUser.startDate->month = std::stoi(params[3]);
	tmpUser.startDate->year = std::stoi(params[4]);
	tmpUser.endDate->day = std::stoi(params[5]);
	tmpUser.endDate->month = std::stoi(params[6]);
	tmpUser.endDate->year = std::stoi(params[7]);
	tmpUser.entriesCount = std::stoi(params[8]);


	return tmpUser;
}

/// <summary>
/// Returns a string of the user's info where the first line is the ID
/// </summary>
/// <param name="user"></param>
/// <returns></returns>
std::string UserFormatConverter::ObjectToFile(User user)
{
	std::string fileContent;
	
	fileContent += user.firstName + "\n";
	fileContent += user.lastName + "\n";
	fileContent += std::to_string(user.startDate->day) + "\n";
	fileContent += std::to_string(user.startDate->month) + "\n";
	fileContent += std::to_string(user.startDate->year) + "\n";
	fileContent += std::to_string(user.endDate->day) + "\n";
	fileContent += std::to_string(user.endDate->month) + "\n";
	fileContent += std::to_string(user.endDate->year) + "\n";
	fileContent += std::to_string(user.entriesCount);

	return fileContent;
}
