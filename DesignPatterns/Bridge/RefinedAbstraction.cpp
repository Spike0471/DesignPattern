#include "RefinedAbstraction.h"

void RefinedAbstraction::operation()
{
	m_imp->operationImp();
}

RefinedAbstraction::RefinedAbstraction(Implementor* imp):
	Abstraction(imp)
{
}
