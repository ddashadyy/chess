#pragma once 

#include "figure.hpp"


class Knight : public Figure
{
public:
    Knight() {}
    Knight(const std::string& _name) : name(_name) {}
    Knight(std::string&& _name) : name(std::move(_name)) {}
    ~Knight() override {}

    void Move(const std::string& new_pos) override {}



private:
    std::string name{};
    std::string position{};
    int figure_cost{};
};