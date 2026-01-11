#pragma once
#include "GL/glew.h"
#include <vector>
#include "stdint.h"

namespace eng
{
	struct VertexElement
	{
		GLuint index; // attr loc
		GLuint size; // number of components
		GLuint type; // GL_FLOAT, GL_INT, etc.
		uint32_t offset; // byte offset from start of vertex
	};
	struct VertexLayout
	{
		std::vector<VertexElement> elements;
		uint32_t stride = 0; // total size of vertex (position + color) in bytes
	};
}