#pragma once

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
public:
    Circulo(std::string, double);
    double calculaArea();
};