#include "UserDataBase.h"
#include "UserFormatConverter.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iterator>

//namespace fs = std::filesystem;


//searches and returns a user in users by id
User UserDatabase::GetUser(std::string id)
{
	std::ifstream in_file("users\\" + id + ".txt");

	if (!in_file)
	{
		User nullUser;
		nullUser.id = "";
		return nullUser;
	}

	std::string info(std::istreambuf_iterator<char>(in_file), (std::istreambuf_iterator<char>()));
	User curUser = UserFormatConverter::FileToObject(id, info);
	return curUser;
}

//1. convert the user to string using "UserFormatConverter::ObjectToFile".
//2. the first line of the string is the user id aka the file name, so create a file in the folder "users\"
//   and make the file name equal to the first line of the string from before.
//3. fill the new user file with the user string except the first line(the first line is the id so we ignore it)
void UserDatabase::AddUser(User user)
{
	std::string userData = UserFormatConverter::ObjectToFile(user);
	std::string fileNmae = user.id + ".txt";
	std::ofstream outputFile("users\\" + fileNmae);
	if (!outputFile)
	{
		outputFile << userData;
	}
}

//using the given user id, find the correct file in the users folder and remove it
//when looking for the file, remember to add .txt after the id string (look at GetUser() for reference)
//return true if reomved successfuly
bool UserDatabase::RemoveUser(User user)
{
	

}
