#pragma once

#include "Trabalhador.h"

class PorHora : public Trabalhador
{
private:
    double valorDaHora;
public:
    PorHora(std::string, double);
    float calcularPagamentoSemanal(int);
};