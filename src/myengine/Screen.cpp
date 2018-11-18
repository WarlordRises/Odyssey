#include "Screen.h"


Screen::Screen(const char* _screenName, unsigned int _width, unsigned int _height)
{
	m_screenName = _screenName;
	m_width = _width;
	m_height = _height;
	Init();
	
}

Screen::~Screen()
{

}

int Screen::Init()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	m_window = SDL_CreateWindow(m_screenName, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, m_width, m_height, SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

	if (m_window == NULL) {
		std::cout << "Could not create window";
		return 1;
	}

	if (!SDL_GL_CreateContext(m_window))
	{
		throw std::exception();
	}

	if (glewInit() != GLEW_OK)
	{
		//throw std::exception();
		std::cout << "glew did not init";
	}

	



	

	

	return 0;
}

void Screen::Update() const
{
	
}

//bool Screen::ScreenClosed()
//{
//	
//}

SDL_Window* Screen::GetWindow()
{
	return m_window;
}

unsigned int Screen::GetWidth()
{
	return m_width;
}

unsigned int Screen::GetHeight()
{
	return m_height;
}

