#include <vector>
#include <SDL2/SDL.h>
#include <iostream>
#include <GL\glew.h>

class Keyboard
{
private:
	std::vector<int> m_keyCodes;
public:
	Keyboard();
	~Keyboard();

	bool GetKey(int _keyCodes);
	bool GetKeyDown(int _keyCodes);
	bool GetKeyUp(int _keyCodes);

	bool Events();

};