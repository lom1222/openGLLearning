#include "header.hpp"

const char* vertexShaderSources[] = {
	"#version 330 core\n"
	"layout (location = 0) in vec3 aPos;\n"
	"void main(){\n"
	"gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);}\n",
};
