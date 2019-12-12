#include "Circulo.h"

#define PI 3.14159265359

Circulo::Circulo(std::string nome, double raio) : FiguraGeometrica(nome, raio) {}

double Circulo::calculaArea() { return lado * lado * PI; }