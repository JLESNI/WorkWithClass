//
// Created by Jakub on 09.06.2024.
//
#include <string>
#ifndef CLASS_CIRCLE_H
#define CLASS_CIRCLE_H


class Circle {
    private:
        std:: string m_name;
        double m_radius;
    public:
        void setName(const std::string& name);
        void setRadius(double radius);
        double getRadius();
        void show();

};


#endif //CLASS_CIRCLE_H
