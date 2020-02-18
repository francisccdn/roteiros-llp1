#include "Poupanca.h"

Poupanca::Poupanca(std::string nome, int num, double saldo, int var, double tax)
    : Conta(nome, num, saldo)
{
    setVariacao(var);
    setTaxaRendimento(tax);
}

double Poupanca::render(){
    if(variacao == 1){
        taxaRendimento += 0.5;
    }

    return saldo*taxaRendimento;
}