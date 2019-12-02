#include "ControleDeGastos.h"

void ControleDeGastos::setDespesa(Despesa d, int pos){
  despesas.insert(despesas.begin() + pos, d);
}

double ControleDeGastos::calculaTotalDeDespesas(){
  double soma;

  for(int i = 0; i < despesas.size(); i++){
    soma += despesas[i].getValor();
  }

  return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string t){
  for(int i = 0; i < despesas.size(); i++){
    if(despesas[i].getTipo() == t){
      return true;
    }
  }
  return false;
}

std::string ControleDeGastos::toString(){
  std::string str = "";
  int i = 1;
  for(Despesa k : despesas){
    str += "Despesa #" + std::to_string(i) + "\n";
    str += k.toString() + "\n\n";
    i++;
  }
  return str;
}
