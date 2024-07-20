#pragma once 

#include "figure.hpp"


class Queen : public Figure
{
public:
    Queen() {}
    Queen(const std::string& _name) : name(_name) {}
    Queen(std::string&& _name) : name(std::move(_name)) {}
    ~Queen() override {}

    void Move(const std::string& new_pos) override {}



private:
    std::string name{};
    std::string position{};
    int figure_cost{};
};