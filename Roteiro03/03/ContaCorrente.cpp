#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string nome, int num, double saldo, double salario, int limite)
    : Conta(nome, num, saldo)
{
    setSalario(salario);
    setLimite(limite);
}

double ContaCorrente::definirLimite()
{
    limite = salario * 2;
    return limite;
}