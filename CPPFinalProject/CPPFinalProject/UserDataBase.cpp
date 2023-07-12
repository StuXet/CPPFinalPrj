#include "UserDataBase.h"
#include "UserFormatConverter.h"
#include <fstream>
#include <string>
#include <filesystem>


User* UserDatabase::GetUser(std::string id)
{
	std::ifstream in_file("users\\" + id + ".txt");

	if (!in_file)
	{
		User nullUser;
		nullUser.id = "";
		return nullptr;
	}

	std::string info(std::istreambuf_iterator<char>(in_file), (std::istreambuf_iterator<char>()));
	User* curUser = UserFormatConverter::FileToObject(id, info);
	return curUser;
}


bool UserDatabase::AddUser(User* user)
{
	std::string userData = UserFormatConverter::ObjectToFile(user);
	std::string fileNmae = user->id + ".txt";
	std::ofstream outputFile("users\\" + fileNmae);
	if (!std::filesystem::exists(fileNmae))
	{
		std::ofstream outputFile("users\\" + fileNmae);
		if (outputFile)
		{
			outputFile << userData;
			return true;
		}
	}
	return false;
}


bool UserDatabase::RemoveUser(User* user)
{
	//converts user id to char in order to use strcpy()
	std::string strTemp = "users\\" + user->id + ".txt";
	char* char_array = new char[strTemp.length() + 1];
	strcpy_s(char_array, strTemp.length() + 1, strTemp.c_str());

	if (remove(char_array) == 0) 
	{
		delete[]  char_array;
		return true;
	}
	delete[] char_array;
	return false;

}