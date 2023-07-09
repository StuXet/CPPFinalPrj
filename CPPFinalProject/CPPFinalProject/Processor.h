#pragma once

#include "Authenticator.h"
#include "Dashboard.h"
#include "DataCommunicator.h"
#include "Database.h"

class Processor
{
private:
    DataCommunicator* dataCommunicator;
    Authenticator* authenticator;
    Database* database;
    Dashboard* dashboard;

public:
    Processor();
    ~Processor();
};
