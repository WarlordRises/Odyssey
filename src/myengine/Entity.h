#include <memory>
#include <vector>

class Core;
class Component;

class Entity
{
private:
	std::vector<std::shared_ptr<Component>> m_components;
	std::weak_ptr<Core> m_core;

public:
	void Addcomponent();
	void Tick();
	void Display();
	std::shared_ptr<Core> GetCore();

	template<typename T> std::shared_ptr<T> GetComponent(int i)
	{
		return 
	}

};
