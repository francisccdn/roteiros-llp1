#include "Quadrado.h"

Quadrado::Quadrado(std::string nome, double lado) : FiguraGeometrica(nome, lado) {}

double Quadrado::calculaArea() { return lado * lado; }