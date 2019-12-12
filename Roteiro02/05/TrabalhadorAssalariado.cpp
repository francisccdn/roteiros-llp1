#include "TrabalhadorAssalariado.h"

Assalariado::Assalariado(std::string nome, double salarioMensal) : Trabalhador(nome, salarioMensal) {}

float Assalariado::calcularPagamentoSemanal(int horas) { return salario / 4; }