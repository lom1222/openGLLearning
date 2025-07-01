
#include <GLFW/glfw3.h>

#ifndef HEADER_HPP
#define HEADER_HPP

extern const char* vertexShaderSources[];
extern const char* fragmentShaderSources[];

GLFWwindow* createWindow(int width, int height, const char* name);
void loadGlad();
void initialize();
unsigned int compileShader(GLenum shaderType, const char* shaderSource);
unsigned int createShaderProgram(unsigned int vertexShader, unsigned int fragmentShader);
void linkVertexAttributes();
void setWireframeMode(bool wireframeMode);

#endif