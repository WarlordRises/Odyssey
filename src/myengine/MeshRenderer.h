#include <memory>
#include "Component.h"

class Mesh;
class Material;

class MeshRenderer : public Component
{
private:
	std::weak_ptr<Mesh> m_mesh;
	std::shared_ptr<Material> m_material;

public:
	std::shared_ptr<Mesh> GetMesh();
	std::shared_ptr<Material> GetMaterial();
	void SetMesh(std::weak_ptr<Mesh> _mesh);
	void OnInit();
	void OnDisplay();

};