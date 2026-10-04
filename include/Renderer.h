#pragma once
#include "../include/Color.h"

class Renderer
{
    public:
        void setClearColor(const Color::Type c);
        void clear() const;
};
