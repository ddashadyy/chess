#pragma once 

#include "figure.hpp"


class King : public Figure
{
public:
    King() {}
    King(const std::string& _name) : name(_name) {}
    King(std::string&& _name) : name(std::move(_name)) {}
    ~King() override {}

    void Move(const std::string& new_pos) override {}



private:
    std::string name{};
    std::string position{};
    int figure_cost{};
};