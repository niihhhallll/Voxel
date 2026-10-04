#include "../include/Color.h"
#include <vector>

glm::vec4 Color::whichColor(Color::Type c) {
    return Color::Colors[c];
}
