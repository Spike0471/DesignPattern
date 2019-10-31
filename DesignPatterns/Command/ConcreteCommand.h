#pragma once
#include "Receiver.h"
#include "Command.h"

class ConcreteCommand :public Command
{
private:
	Receiver* receiver;
public:
	ConcreteCommand(Receiver* rec);
	void execute();
};

