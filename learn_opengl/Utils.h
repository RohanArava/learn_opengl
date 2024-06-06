#pragma once
namespace utils {
	void ClearWithColor(float r, float g, float b, float a);
	int CheckShaderCompilationStatus(unsigned int shader);
	int CheckProgramLinkStatus(unsigned int program);
}