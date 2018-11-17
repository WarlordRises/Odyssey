#include "ShaderProgram.h"



ShaderProgram::ShaderProgram(std::string _vert, std::string _frag)
{
	m_inFile.open(_vert);

	if (!m_inFile.is_open())
	{
		throw std::exception();
	}
	else
	{
		std::cout << "Vert file is open\n\n";
	}

	while (!m_inFile.eof())
	{
		std::getline(m_inFile, m_line);
		m_vertSrc += m_line + "\n";
	}

	//std::cout << vertSrc;

	m_inFile.close();


	m_inFile.open(_frag);

	if (!m_inFile.is_open())
	{
		throw std::exception();
	}
	else
	{
		std::cout << "frag file is open\n\n";
	}

	while (!m_inFile.eof())
	{
		std::getline(m_inFile, m_line);
		m_fragSrc += m_line + "\n";
	}

	//std::cout << m_fragSrc;


	m_vertShader = m_vertSrc.c_str();
	m_vertSId = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(m_vertSId, 1, &m_vertShader, NULL);
	glCompileShader(m_vertSId);

	
}