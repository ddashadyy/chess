#pragma once 

#include "figure.hpp"


class Bishop : public Figure
{
public:
    Bishop() {}
    Bishop(const std::string& _name) : name(_name) {}
    Bishop(std::string&& _name) : name(std::move(_name)) {}
    ~Bishop() override {}

    void Move(const std::string& new_pos) override {}



private:
    std::string name{};
    std::string position{};
    int figure_cost{};
};