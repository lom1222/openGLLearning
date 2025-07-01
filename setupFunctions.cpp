
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "header.hpp"

GLFWwindow* createWindow(int width, int height, const char* name) {
	GLFWwindow* window = glfwCreateWindow(width, height, name, NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW Window" << std::endl;
		glfwTerminate();
		throw 1000001;
	}
	return window;
}

void loadGlad() {
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		throw 1000002;
	}
}

void initialize() {
	if (!glfwInit()) {
		std::cout << "Failed to initialize GLFW" << std::endl;
		throw 1000003;
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}
