
#include <iostream>
#include "Circle.h"

void Circle::setName(const std::string& name) {
    m_name = name;
}

void Circle::setRadius(double radius) {
    m_radius=radius;
}

double Circle::getRadius() {
    return m_radius;
}


void Circle::show() {
    std::cout << "Circle: " << m_name << " radius"" " "" << m_radius << "" << std::endl;
}