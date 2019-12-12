#include "Trabalhador.h"

Trabalhador::Trabalhador(std::string nome, double salario){
    this->nome = nome;
    this->salario = salario;
}

std::string Trabalhador::getNome() { return nome; }

float Trabalhador::calcularPagamentoSemanal(int horas) { return salario / 4; }