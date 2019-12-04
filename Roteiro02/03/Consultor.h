
/*Crie uma classe Funcionario com os atributos matricula , nome e salário , e os
métodos get() e set() de cada atributo. Em seguida, crie uma classe Consultor que herda
da classe Funcionario e sobrescreve o método getSalario() , adicionando um percentual
de 10% no valor do salário. Implemente também um método getSalario(float
percentual) , onde o parâmetro “ float percentual ” determina o percentual a ser
acrescido no salário de Consultor .*/

#pragma once

#include "Funcionario.h"

class Consultor : public Funcionario
{
public:
    Consultor();
    Consultor(std::string, std::string, double);
    
    double getSalario();
    double getSalario(double);
};