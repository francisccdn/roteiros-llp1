#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(std::string nome, double lado)
{
    this->nome = nome;
    this->lado = lado;
}

std::string FiguraGeometrica::getNome() { return nome; }

double FiguraGeometrica::calculaArea() { return 0; }