#pragma once
#include "Command.h"

class Invoker
{
private:
	Command* command;
public:
	Invoker(Command* cmd) { command = cmd; }
	void call();
};

