#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <iostream>

class Screen
{
private:
	unsigned int m_width;
	unsigned int m_height;
	const char* m_screenName;
	bool m_windowClosed;

	SDL_Window* m_window = NULL;


	int Init();

public:
	Screen(const char* _screenName, unsigned int _width, unsigned int _Height);
	~Screen();
	void Update() const;
	unsigned int GetWidth();
	unsigned int GetHeight();
	bool ScreenClosed();



	SDL_Window* GetWindow();

};