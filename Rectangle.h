#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;
    
public:
    // Default constructor
    Rectangle();
    
    // Overloaded constructor
    Rectangle(float l, float w);
    
    // Destructor
    ~Rectangle();
    
    // Accessor methods for assigning values (setters)
    void setLength(float l);
    void setWidth(float w);
    
    // Accessor methods for retrieving values (getters)
    float getLength() const;
    float getWidth() const;
    
    // Member function to calculate area
    float calculateArea() const;
};

#endif