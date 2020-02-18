#pragma once

#include "Funcionario.h"
#include <vector>

class SistemaGerenciaFolha
{
private:
    double orcamentoMaximo;
    std::vector<Funcionario*> funcionarios;

public:
    SistemaGerenciaFolha(double);

    void setFuncionario(Funcionario *func) { funcionarios.push_back(func); }
    double calculaTotalFolha();
    double consultaSalarioFuncionario();
};