#include "ConcreteCommand.h"

ConcreteCommand::ConcreteCommand(Receiver* rec)
{
	receiver = rec;
}

void ConcreteCommand::execute()
{
	if (receiver)
		receiver->action();
}
