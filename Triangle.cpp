#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() {
        base = 0;
        height = 0;
    }
    
    Triangle::Triangle(float b, float h) {
        base = b;
        height = h;
    }
    
    Triangle::~Triangle() {
        // Does nothing
    }
    
    void Triangle::setBase(float b) {
        base = b;
    }
    
    void Triangle::setHeight(float h) {
        height = h;
    }
    
    float Triangle::getBase() const {
        return base;
    }
    
    float Triangle::getHeight() const {
        return height;
    }
}