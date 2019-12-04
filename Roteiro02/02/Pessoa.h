#pragma once

#include <string>
#include "Endereco.h"

class Pessoa
{
private:
    std::string nome;
    Endereco endereco;
    std::string telefone;

public:
    Pessoa(std::string);
    Pessoa(std::string, Endereco, std::string);

    std::string getNome();
    std::string getTel();
    Endereco getEnd();
    std::string getEndStr();

    void setNome(std::string);
    void setTel(std::string);
    void setEnd(Endereco);
};