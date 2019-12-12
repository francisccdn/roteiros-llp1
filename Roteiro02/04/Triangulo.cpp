#include "Triangulo.h"

Triangulo::Triangulo(std::string nome, double lado) : FiguraGeometrica(nome, lado) {}

double Triangulo::calculaArea() { return (lado * 1.73205080757) / 4; }