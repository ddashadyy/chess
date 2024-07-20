#pragma once 

#include <vector>
#include "figure.hpp"
#include "king.hpp"
#include "queen.hpp"
#include "rook.hpp"
#include "knight.hpp"
#include "bishop.hpp"
#include "pawn.hpp"

// Доска для шахмат
class Desk
{


private:
    std::vector<std::vector<Figure>> desk;

};