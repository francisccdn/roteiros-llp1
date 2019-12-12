#include "Hexagono.h"

Hexagono::Hexagono(std::string nome, double lado) : FiguraGeometrica(nome, lado) {}

double Hexagono::calculaArea() { return 3 * (lado * 1.73205080757) / 4; }