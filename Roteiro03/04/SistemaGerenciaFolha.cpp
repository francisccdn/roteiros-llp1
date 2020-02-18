#include "SistemaGerenciaFolha.h"
#include <iostream>

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMax)
{
    orcamentoMaximo = orcamentoMax;
}

double SistemaGerenciaFolha::calculaTotalFolha()
{
    double total = 0;
    for(Funcionario *f : funcionarios)
    {
        total += f->calcularSalario();
    }
    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario()
{
    for(Funcionario *f : funcionarios)
    {
        std::cout << "Funcionario: " << f->getNome() << " | ";
        std::cout << "Salario: " << f->calcularSalario() << std::endl;
    }
}