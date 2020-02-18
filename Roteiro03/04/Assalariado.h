#pragma once

#include "Funcionario.h"

class Assalariado : public Funcionario
{
public:
    Assalariado(std::string, int, double);

    void setSalario(double s) { salarioBase = s; }
    double calcularSalario() { return salarioBase; }
};