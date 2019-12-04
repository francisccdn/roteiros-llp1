#pragma once

#include <string>

class Funcionario
{
protected:
    std::string matricula, nome;
    double salario;

public:
    Funcionario();
    Funcionario(std::string, std::string, double);

    std::string getMatricula();
    std::string getNome();
    double getSalario();

    void setMatricula(std::string);
    void setNome(std::string);
    void setSalario(double);
};