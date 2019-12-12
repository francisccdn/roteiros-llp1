#pragma once

#include <string>

class FiguraGeometrica
{
protected:
    std::string nome;
    double lado;

public:
    FiguraGeometrica(std::string, double);

    virtual double calculaArea();
    std::string getNome();
};