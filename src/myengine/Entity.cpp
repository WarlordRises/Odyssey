#include "Entity.h"
#include "Component.h"
#include "Core.h"


void Entity::Addcomponent()
{

}

void Entity::Tick()
{
	
}

void Entity::Display()
{

}
std::shared_ptr<Core> Entity::GetCore()
{
	return m_core.lock();
}