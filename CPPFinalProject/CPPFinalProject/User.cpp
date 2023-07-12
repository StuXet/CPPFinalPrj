#include "User.h"

User::User() : startDate(new Date()), endDate(new Date()), entriesCount(0) {}

User::~User()
{
    delete startDate;
    delete endDate;
}