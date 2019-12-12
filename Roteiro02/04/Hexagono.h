#pragma once

#include "FiguraGeometrica.h"

class Hexagono : public FiguraGeometrica
{
public:
    Hexagono(std::string, double);
    double calculaArea();
};