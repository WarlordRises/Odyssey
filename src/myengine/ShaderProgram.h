#include <string>
#include <glm/glm.hpp>
#include <fstream>
#include <iostream>
#include <exception>
#include <GL/glew.h>

class ShaderProgram
{
private:
	std::ifstream m_inFile;
	std::string m_vertSrc;
	std::string m_fragSrc;
	std::string m_line;

	const GLchar* m_vertShader;

	GLuint m_vertSId;

	

public:
	ShaderProgram(std::string _vert, std::string _frag);

};