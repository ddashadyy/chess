#pragma once 

#include "figure.hpp"


class Rook : public Figure
{
public:
    Rook() {} 
    Rook(const std::string& _name) : name(_name) {}
    Rook(std::string&& _name) : name(std::move(_name)) {}
    ~Rook() override {}

    void Move(const std::string& new_pos) override {}



private:
    std::string name{};
    std::string position{};
    int figure_cost{};
};