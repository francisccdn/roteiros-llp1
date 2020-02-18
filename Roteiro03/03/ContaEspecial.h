#pragma once

#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
public:
    ContaEspecial(std::string nome, int num, double saldo, double salario, int limite);
    double definirLimite();
};