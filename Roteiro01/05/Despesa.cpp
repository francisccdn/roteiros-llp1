#include "Despesa.h"

Despesa::Despesa(){
  valor = 0;
  tipoDeGasto = "Sem gasto";
}

Despesa::Despesa(double v, std::string t){
  valor = v;
  tipoDeGasto = t;
}

void Despesa::setValor(double v){valor = v;}
void Despesa::setTipo(std::string t){tipoDeGasto = t;}

double Despesa::getValor(){return valor;}
std::string Despesa::getTipo(){return tipoDeGasto;}
