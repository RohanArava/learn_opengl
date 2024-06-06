#include "Utils.h"
#include <glad/glad.h>
#include <iostream>
void utils::ClearWithColor(float r, float g, float b, float a)
{
		glClearColor(r, g, b, a);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

int utils::CheckShaderCompilationStatus(unsigned int shader)
{
	int success;
	char infoLog[512];
	glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(shader, 512, NULL, infoLog);
		std::cout << "ERROR::SHADER::COMPILATION_FAILED\n" <<
			infoLog << std::endl;
		return 1;
	}
	return 0;
}

int utils::CheckProgramLinkStatus(unsigned int program)
{
	int success;
	char infoLog[512];
	glGetProgramiv(program, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetProgramInfoLog(program, 512, NULL, infoLog);
		std::cout << "ERROR::PROGRAM::LINKAGE_FAILED\n" <<
			infoLog << std::endl;
		return 1;
	}
	return 0;
}
