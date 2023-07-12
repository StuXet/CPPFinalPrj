#include "UserCreator.h"


User* UserCreator::CreateUser(string _id, string _firstName, string _lastName, int subTime)
{
    User* newUser = new User();

    newUser->id = _id;
    newUser->firstName = _firstName;
    newUser->lastName = _lastName;

    int endM = newUser->endDate->month;

    //changes month and year if new sum of month is greater than 12(december)
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