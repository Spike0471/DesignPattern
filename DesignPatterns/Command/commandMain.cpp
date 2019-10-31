#include "Invoker.h"
#include "ConcreteReceiver.h"
#include "ConcreteCommand.h"

int main() 
{
	Receiver* rec = new ConcreteReceiver();
	Command* cmd = new ConcreteCommand(rec);
	Invoker* ivk = new Invoker(cmd);
	ivk->call();
	return 0;
}