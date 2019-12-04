#pragma once

#include <string>

class Endereco
{
private:
    std::string rua;
    int num;
    std::string bairro;
    std::string cidade;
    std::string estado;
    std::string cep;

public:
    Endereco();
    Endereco(std::string, int, std::string, std::string, std::string, std::string);
    std::string toString();
};