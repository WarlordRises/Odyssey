#include <string>
#include <glm/glm.hpp>
#include <fstream>
#include <iostream>
#include <exception>
#include <GL/glew.h>

class VertexArray;

struct test
{
	
};

class ShaderProgram
{
private:
	std::ifstream m_inFile;

	std::string m_vertSrc;
	std::string m_fragSrc;
	std::string m_line;

	const GLchar* m_vertShader;
	const GLchar* m_fragShader;

	GLuint m_vertShaderId;
	GLuint m_fragShaderId;
	GLuint m_shaderProgram;

	GLint m_success = 0;
	GLint m_posAttrib;
	GLint m_uniColour;
	

	

public:
	ShaderProgram(std::string _vert, std::string _frag);
	~ShaderProgram();

	void Draw();

};