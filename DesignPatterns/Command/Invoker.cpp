#include "Invoker.h"

void Invoker::call()
{
	if (command)
		command->execute();
}
