#include "ShaderProgram.h"



ShaderProgram::ShaderProgram(std::string _vert, std::string _frag)
{
	m_inFile.open(_vert); //open the vertex shader file

	if (!m_inFile.is_open()) //check if file was not opened
	{
		throw std::exception(); //if file was not opened throw exception
	}
	else
	{
		std::cout << "Vert file is open\n\n";
	}

	while (!m_inFile.eof()) //while it is not at the end of the file
	{
		std::getline(m_inFile, m_line); //make line the contents of the the current line in the file
		m_vertSrc += m_line + "\n"; //add the contents of file to vertSrc variable and end line
	}

	

	//std::cout << vertSrc;

	m_inFile.close(); //close the vertex shader file


	m_inFile.open(_frag); //open the fragmeant shader file

	if (!m_inFile.is_open()) //check if file was not opened
	{
		throw std::exception(); //if file was not opened throw exception
	}
	else
	{
		std::cout << "frag file is open\n\n";
	}

	while (!m_inFile.eof()) //while it is not at the end of the file
	{
		std::getline(m_inFile, m_line); //make line the contents of the the current line in the file
		m_fragSrc += m_line + "\n"; //add the contents of file to vertSrc variable and end line
	}

	//std::cout << m_fragSrc;

	m_inFile.close(); //close the fragment shader file


	m_vertShader = m_vertSrc.c_str();
	m_vertShaderId = glCreateShader(GL_VERTEX_SHADER); //creates a shader object with vertex shader type
	glShaderSource(m_vertShaderId, 1, &m_vertShader, NULL); //sets the source code for the shader
	glCompileShader(m_vertShaderId); //compile shader
	glGetShaderiv(m_vertShaderId, GL_COMPILE_STATUS, &m_success);

	if (!m_success)
	{
		throw std::exception();
	}
	else
	{
		std::cout << "success1\n\n";
	}

	m_fragShader = m_fragSrc.c_str();
	m_fragShaderId = glCreateShader(GL_FRAGMENT_SHADER); //creates a shader object with fragment shader type
	glShaderSource(m_fragShaderId, 1, &m_fragShader, NULL); //sets the source code for the shader
	glCompileShader(m_fragShaderId); //compile shader
	glGetShaderiv(m_fragShaderId, GL_COMPILE_STATUS, &m_success);

	if (!m_success)
	{
		throw std::exception();
	}
	else
	{
		std::cout << "success2\n\n";
	}

	m_shaderProgram = glCreateProgram(); //creates a program for the shaders
	glAttachShader(m_shaderProgram, m_vertShaderId); //attach the vertex shader to the program
	glAttachShader(m_shaderProgram, m_fragShaderId); //attach the fragment shader to the program

	glBindFragDataLocation(m_shaderProgram, 0, "outColor");

	glLinkProgram(m_shaderProgram);
	glUseProgram(m_shaderProgram);
	

	m_posAttrib = glGetAttribLocation(m_shaderProgram, "position");
	glVertexAttribPointer(m_posAttrib, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(m_posAttrib);

	//m_uniColour = glGetUniformLocation(m_shaderProgram, "triangleColor");


	std::cout << "hi";
}

ShaderProgram::~ShaderProgram()
{

}

void ShaderProgram::Draw()
{
	

	glDrawArrays(GL_TRIANGLES, 0, 3);
}