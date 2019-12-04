#include "Consultor.h"

Consultor::Consultor() : Funcionario() {}

Consultor::Consultor(std::string m, std::string n, double s) : Funcionario(m, n, s) {}

double Consultor::getSalario() { return salario * 1.1; }

double Consultor::getSalario(double per) { return salario * (1 + per); }