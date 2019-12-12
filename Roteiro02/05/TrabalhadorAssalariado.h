#pragma once

#include "Trabalhador.h"

class Assalariado : public Trabalhador
{
public:
    Assalariado(std::string, double);
    float calcularPagamentoSemanal(int);
};