#pragma once

#include "Conta.h"

class Poupanca : public Conta
{
private:
    int variacao;
    double taxaRendimento;

public:
    double render();

    Poupanca(std::string nome, int num, double saldo, int var, double tax);

    int getVariacao() { return variacao; }
    double getTaxaRendimento() { return taxaRendimento; }
    void setVariacao(int var) { variacao = var; }
    void setTaxaRendimento(double tax) { taxaRendimento = tax; }
};