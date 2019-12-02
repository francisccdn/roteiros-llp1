#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main(){
  ControleDeGastos meusGastos;
  Despesa gasto1 = Despesa(30, "Comida");
  Despesa gasto2 = Despesa(50, "Diversao");
  Despesa gasto3;

  gasto3.setValor(10);
  gasto3.setTipo("Comida");

  meusGastos.setDespesa(gasto1, 0);
  meusGastos.setDespesa(gasto2, 1);
  meusGastos.setDespesa(gasto3, 2);

  cout << "Total de gastos: " << meusGastos.calculaTotalDeDespesas() << endl << endl;
  cout << "Existe despesa do tipo 'Comida'? ";
  if(meusGastos.existeDespesaDoTipo("Comida")){
    cout << "Sim" << endl;
  }else{
    cout << "Nao" << endl;
  }

  cout << "Existe despesa do tipo 'Roupas'? ";
  if(meusGastos.existeDespesaDoTipo("Roupas")){
    cout << "Sim" << endl;
  }else{
    cout << "Nao" << endl;
  }

  cout << endl << "Todas as depesas:" << endl << endl;
  cout << meusGastos.toString() << endl;

  return 0;
}
