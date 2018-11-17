#include "Keyboard.h"


Keyboard::Keyboard()
{

}

Keyboard::~Keyboard()
{

}

//bool Keyboard::GetKey(int _keyCodes)
//{
//
//}
//
//bool Keyboard::GetKeyDown(int _keyCodes)
//{
//
//}
//
//bool Keyboard::GetKeyUp(int _keyCodes)
//{
//
//}

bool Keyboard::Events()
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_KEYDOWN)
		{
			std::cout << "hey" << std::endl;

		}

		if (event.type == SDL_QUIT)
		{
			return false;
		}

		
	}

	return true;
}