#pragma once

#include "Conta.h"

class ContaCorrente : public Conta
{
protected:
    double salario;
    int limite;

public:
    double definirLimite();

    ContaCorrente(std::string nome, int num, double saldo, double salario, int limite);

    double getSalario() { return salario; }
    int getLimite() { return limite; }
    void setSalario(double salario) { this->salario = salario; }
    void setLimite(int limite) { this->limite = limite; }
};