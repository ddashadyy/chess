#pragma once 

#include "figure.hpp"


class Pawn : public Figure
{
public:
    Pawn() {}
    Pawn(const std::string& _name) : name(_name) {}
    Pawn(std::string&& _name) : name(std::move(_name)) {}
    ~Pawn() override {}

    void Move(const std::string& new_pos) override {}



private:
    std::string name{};
    std::string position{};
    int figure_cost{};
};