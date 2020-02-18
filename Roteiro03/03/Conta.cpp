#include "Conta.h"
#include <iostream>

Conta::Conta(std::string nome, int num, double sal){
    setNomeCliente(nome);
    setNumero(num);
    setSaldo(sal);
}

void Conta::sacar(double valor){
    if(valor > saldo){
        std::cout << "Saldo indisponivel." << std::endl;
    }else{
        saldo -= valor;
    }
}

void Conta::depositar(double valor){
    saldo += valor;
}