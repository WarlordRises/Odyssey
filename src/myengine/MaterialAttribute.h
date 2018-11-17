#include <memory>
#include <string>

class Texture;

class MaterialAttribute
{
private:
	std::string m_name;
	int m_type;
	float m_floatValue;
	std::weak_ptr<Texture> m_textureValue;

public:


};