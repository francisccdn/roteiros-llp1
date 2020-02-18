#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nome, int num, double saldo, double salario, int limite)
    : ContaCorrente(nome, num, saldo, salario, limite) {}

double ContaEspecial::definirLimite()
{
    limite = salario * 4;
    return limite;
}