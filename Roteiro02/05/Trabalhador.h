#pragma once

#include <string>

class Trabalhador
{
protected:
    std::string nome;
    double salario;
public:
    Trabalhador(std::string, double);
    virtual float calcularPagamentoSemanal(int);
    
    std::string getNome();
};