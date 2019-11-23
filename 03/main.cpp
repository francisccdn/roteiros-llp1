#include <iostream>
#include "Empregado.h"

using namespace std;

int main(){
  Empregado pessoa1 = Empregado("Joao", "da Silva", 1250);
  Empregado *pPessoa = new Empregado("Paulo", "Pontes", 9999);

  cout << "Nome: " << pessoa1.getNome() << " " << pessoa1.getSobrenome() << endl;
  cout << "Salario anual: R$" << pessoa1.getSalarioMensal() << endl << endl;
  cout << "Nome: " << pPessoa->getNome() << " " << pPessoa->getSobrenome() << endl;
  cout << "Salario anual: R$" << pPessoa->getSalarioMensal() << endl << endl;

  pessoa1.aumentoPorcent(10);
  pPessoa->aumentoPorcent(10);

  cout << "Nome: " << pessoa1.getNome() << " " << pessoa1.getSobrenome() << endl;
  cout << "Salario anual: R$" << pessoa1.getSalarioMensal() << endl << endl;
  cout << "Nome: " << pPessoa->getNome() << " " << pPessoa->getSobrenome() << endl;
  cout << "Salario anual: R$" << pPessoa->getSalarioMensal() << endl << endl;

  return 0;
}
