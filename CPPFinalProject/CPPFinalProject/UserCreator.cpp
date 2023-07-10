#include "UserCreator.h"

//create and return new user with given arguments
User* UserCreator::CreateUser(string _id, string _firstName, string _lastName, int subTime)
{
    User* newUser = new User();

    newUser->id = _id;
    newUser->firstName = _firstName;
    newUser->lastName = _lastName;

    newUser->startDate = new Date();
    newUser->endDate = new Date();

    int endM = newUser->endDate->month;

    if (endM + subTime <= 12)
    {
        endM += subTime;
    }
    else
    {
        endM = (endM + subTime) - 12;
        newUser->endDate->year++;
    }
    newUser->endDate->month = endM;
   
    return newUser;
}
