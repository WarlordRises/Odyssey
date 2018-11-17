#include <memory>
#include <vector>
#include <SDL2/SDL.h>

class Environment;
class Entity;
class Keyboard;
class Resources;
class Screen;

class Core
{
private:
	std::shared_ptr<Environment> m_environment;
	std::vector<std::shared_ptr<Entity>> m_entities;
	std::shared_ptr<Keyboard> m_keyboard;
	std::shared_ptr<Resources> m_resources;
	std::shared_ptr<Screen> m_screen;

	SDL_Window* window;

	bool m_running;

public:
	std::shared_ptr<Core> Initialise();
	std::shared_ptr<Entity> AddEntity();
	void Start();
	void Stop();
};