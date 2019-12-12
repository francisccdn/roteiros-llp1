#pragma once

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
public:
    Quadrado(std::string, double);
    double calculaArea();
};