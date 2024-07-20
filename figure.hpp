#pragma once

#include <string>
#include <utility>
#include <iostream>
// Абстрактный класс фигуры
class Figure
{
public:
    Figure() { }
    Figure(const std::string& _name) : name(_name) {}
    Figure(std::string&& _name) : name(std::move(_name)) {}
    virtual ~Figure() {}

    virtual void Move(const std::string& new_pos) = 0;


protected:
    std::string name{};
    std::string position{};

};