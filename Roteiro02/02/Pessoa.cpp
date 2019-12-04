#include "Pessoa.h"

Pessoa::Pessoa(std::string nome)
{
    setNome(nome);
    endereco = Endereco();
    setTel("Não informado");
}

Pessoa::Pessoa(std::string nome, Endereco end, std::string tel)
{
    setNome(nome);
    setEnd(end);
    setTel(tel);
}

std::string Pessoa::getNome() { return nome; }
std::string Pessoa::getTel() { return telefone; }
Endereco Pessoa::getEnd() { return endereco; }

std::string Pessoa::getEndStr()
{
    std::string str = endereco.toString();
    return str;
}

void Pessoa::setNome(std::string nome) { this->nome = nome; }
void Pessoa::setTel(std::string tel) { this->telefone = tel; }
void Pessoa::setEnd(Endereco end) { this->endereco = end; }