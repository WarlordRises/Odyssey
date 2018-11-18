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

	auto t_start = std::chrono::high_resolution_clock::now();
	bool running = true;
	Screen screen("Odyssey", 800, 600);
	Keyboard* keyboard = new Keyboard();
	
	
	//GLfloat vertices[] =
	//{
	// 0.0f,  0.5f, // Vertex 1 (X, Y)
	// 0.5f, -0.5f, // Vertex 2 (X, Y)
	//-0.5f, -0.5f  // Vertex 3 (X, Y)
	//};

	GLfloat vertices[] = 
	{
	 0.0f,  0.5f, 1.0f, 0.0f, 0.0f, // Vertex 1: Red
	 0.5f, -0.5f, 0.0f, 1.0f, 0.0f, // Vertex 2: Green
	-0.5f, -0.5f, 0.0f, 0.0f, 1.0f  // Vertex 3: Blue
	};

	GLuint vbo;
	glGenBuffers(1, &vbo); // Generate 1 buffer
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
 
	
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	ShaderProgram* shader = new ShaderProgram("../shaders/VertShader.vert", "../shaders/FragShader.frag");

	while(running)
	{
		running = keyboard->Events();

		auto t_now = std::chrono::high_resolution_clock::now();
		float time = std::chrono::duration_cast<std::chrono::duration<float>>(t_now - t_start).count();

		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);


		shader->Draw(time);

		SDL_GL_SwapWindow(screen.GetWindow());
	}

	SDL_DestroyWindow(screen.GetWindow());
	SDL_Quit();

/*
	Entity *ent = new Entity();

	ent->Addcomponent();*/

	return 0;
}
