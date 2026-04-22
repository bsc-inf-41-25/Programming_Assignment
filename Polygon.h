#pragma once

class Polygon {
protected:
    int mWidth;
    int mHeight;
public:
    void SetValues(int width, int height);
    virtual int Area() = 0;  // ← CHANGE: Add = 0 (pure virtual)
};