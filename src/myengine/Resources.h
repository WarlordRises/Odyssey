#include <memory>
#include <list>
#include <string>

class Resource;

class Resources
{
private:
	std::list < std::shared_ptr<Resource>> m_resources;


public:

	//std::shared_ptr<T> Load<T>(std::string _path);
	//std::shared_ptr<T> Create<T>();

};