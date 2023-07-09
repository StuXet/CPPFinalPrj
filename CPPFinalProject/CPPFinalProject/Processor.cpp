#include "Processor.h"

Processor::Processor() 
{
	database = new Database();
	authenticator = new Authenticator(*database);
}


