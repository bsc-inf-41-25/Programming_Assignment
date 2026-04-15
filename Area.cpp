#include "Area.h"
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

float Area::calculateSquareArea(const shapes::Square& square) {
    float side = square.getSideLength();
    return side * side;
}

float Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

float Area::calculateCircleArea(const shapes::Circle& circle) {
    float radius = circle.getRadius();
    return M_PI * radius * radius;
}