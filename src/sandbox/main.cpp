#include <iostream>
#include <glm/glm.hpp>
#include <GL/glew.h>

#include <myengine/Entity.h>
#include <myengine/Screen.h>
#include <myengine/Keyboard.h>
#include <myengine/ShaderProgram.h>


typedef double foble;


int main()
{
	bool running = true;
	Screen screen("Odyssey", 800, 600);
	Keyboard* keyboard = new Keyboard();
	ShaderProgram* shader = new ShaderProgram("../shaders/VertShader.vert", "../shaders/FragShader.frag");
	



	float vertices[] = 
	{
	 0.0f,  0.5f, // Vertex 1 (X, Y)
	 0.5f, -0.5f, // Vertex 2 (X, Y)
	-0.5f, -0.5f  // Vertex 3 (X, Y)
	};

	//GLuint vbo;
	//glGenBuffers(1, &vbo); // Generate 1 buffer

	//glBindBuffer(GL_ARRAY_BUFFER, vbo);

	//glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);


	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	SDL_GL_SwapWindow(screen.GetWindow());

	while(running)
	{
		running = keyboard->Events();
	}

	SDL_DestroyWindow(screen.GetWindow());
	SDL_Quit();

/*
	Entity *ent = new Entity();

	ent->Addcomponent();*/

	return 0;
}
