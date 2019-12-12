#pragma once

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
public:
    Triangulo(std::string, double);
    double calculaArea();
};
