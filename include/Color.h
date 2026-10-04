//
// Created by gigu on 04/10/26.
//

#ifndef VOXEL_COLOR_H
#define VOXEL_COLOR_H
#include "../include/glm/glm.hpp"
namespace Color {
    enum Type {
        BLACK = 0,
        WHITE,
        RED,
        GREEN,
        BLUE,
        CYAN,
        MAGENTA,
        ORANGE,
        YELLOW,
        PINK,
        PURPLE,
        OLIVE,
    };

    static std::vector<glm::vec4> Colors = {
        glm::vec4(0.0f,  0.0f,  0.0f,  1.0f), // BLACK   (0)
        glm::vec4(1.0f,  1.0f,  1.0f,  1.0f), // WHITE   (1)
        glm::vec4(1.0f,  0.0f,  0.0f,  1.0f), // RED     (2)
        glm::vec4(0.0f,  1.0f,  0.0f,  1.0f), // GREEN   (3)
        glm::vec4(0.0f,  0.0f,  1.0f,  1.0f), // BLUE    (4)
        glm::vec4(0.0f,  1.0f,  1.0f,  1.0f), // CYAN    (5)
        glm::vec4(1.0f,  0.0f,  1.0f,  1.0f), // MAGENTA (6)
        glm::vec4(1.0f,  0.5f,  0.0f,  1.0f), // ORANGE  (7)
        glm::vec4(1.0f,  1.0f,  0.0f,  1.0f), // YELLOW  (8)
        glm::vec4(1.0f,  0.75f, 0.8f,  1.0f), // PINK    (9)
        glm::vec4(0.5f,  0.0f,  0.5f,  1.0f), // PURPLE  (10)
        glm::vec4(0.5f,  0.5f,  0.0f,  1.0f)  // OLIVE   (11)
    };
    glm::vec4 whichColor(Color::Type c);
}
#endif //VOXEL_COLOR_H
