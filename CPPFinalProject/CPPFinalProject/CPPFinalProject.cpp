#include <iostream>
#include "Processor.h"

int main()
{
    Processor* prc = new Processor;
    Date* date = new Date;

    date->print();
/////////////////////////////////////////////
    UserCreator userCreator;
    std::string id, firstName, lastName;
    Date startDate;
    int subTime = 0;
    std::cout << "Enter ID: ";
    std::getline(std::cin, id);

    User user = userCreator.CreateUser(id, firstName, lastName, startDate, subTime);
}