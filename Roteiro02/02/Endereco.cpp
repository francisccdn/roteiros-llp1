#include "Endereco.h"

Endereco::Endereco()
{
    this->rua = "Não informado";
    this->num = 0;
    this->bairro = "Não informado";
    this->cidade = "Não informado";
    this->estado = "Não informado";
    this->cep = "Não informado";
}

Endereco::Endereco(std::string rua, int num, std::string bairro,
                   std::string cidade, std::string estado, std::string cep)
{

    this->rua = rua;
    this->num = num;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}

std::string Endereco::toString()
{
    std::string str = rua + ", " + std::to_string(num) + " - " 
                    + bairro + ", " + cidade + ", " + estado + " - CEP: " + cep;
    return str;
}