
#include <GLFW/glfw3.h>

#include "header.hpp"


void setWireframeMode(bool wireframeMode) {
	if (wireframeMode) {
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	}else{
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	}
}