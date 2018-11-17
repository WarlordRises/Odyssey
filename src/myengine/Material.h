#include <memory>
#include <vector>
#include <string>

class MaterialAttribute;

class Material
{
private:
	//std::weak_ptr<Shader> m_shader;
	std::vector<MaterialAttribute> m_attributes;

public:
	//std::shared_ptr<Shader> GetShader(); no shader
	//void SetShader(std::weak_ptr<Shader> _shader); no shader
	//void SetValue(std::string _name, std::weak_ptr<Texture> _value); no texture
	void SetValue(std::string _name, float value);
};