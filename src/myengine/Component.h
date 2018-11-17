#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <memory>

class Entity;
class Keyboard;
class Environment;
class Core;
class Resources;
class Transform;

class Component
{
private:
	std::weak_ptr<Entity> m_entity;

public:
	std::shared_ptr<Entity> GetEntity();
	std::shared_ptr<Core> GetCore();
	std::shared_ptr<Keyboard> GetKeyboard();
	std::shared_ptr<Environment> GetEnvironment();
	std::shared_ptr<Resources> GetResources();
	std::shared_ptr<Transform> GetTransform();
	void OnInit();
	void OnBegin();
	void OnTick();
	void OnDisplay();

};

#endif