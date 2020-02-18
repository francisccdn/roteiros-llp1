#pragma once

#include <string>

class Conta
{
protected:
    std::string nomeCliente;
    int numero;
    double saldo;

public:
    void sacar(double);
    void depositar(double);

    Conta(std::string, int, double);

    std::string getNomeCliente() { return nomeCliente; }
    int getNumero() { return numero; }
    double getSaldo() { return saldo; }
    void setNomeCliente(std::string nome) { nomeCliente = nome; }
    void setNumero(int num) { numero = num;}
    void setSaldo(double saldo) { this->saldo = saldo;}
};