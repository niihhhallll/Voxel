#include "../include/Renderer.h"
#include "../include/glad/glad.h"
#include "../include/Color.h"
#include "../include/glm/glm.hpp"

void Renderer::setClearColor(const Color::Type c)
{
    const glm::vec4 Color = whichColor(c);
    glClearColor(Color.x,Color.y,Color.z,Color.w);
    return;
}

void Renderer::clear() const
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    return;
}
