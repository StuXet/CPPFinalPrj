#include <iostream>
#include "Processor.h"

int main()
{
    Processor* prc = new Processor;
    Date* date = new Date;

    date->print();
/////////////////////////////////////////////
    UserDatabase userDatabase;
    User user;
    //userDatabase.AddUser(user);
    //userDatabase.RemoveUser(&user);

    string id = "110";
    userDatabase.GetUser(id);
    
}