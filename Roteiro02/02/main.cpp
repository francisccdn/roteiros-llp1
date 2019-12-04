#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"

using namespace std;

int main(){
    Endereco end1 = Endereco("Rua Leonor Viana de Souza Carvalho", 150, "Poco", "Cabedelo", "PB", "58102-205");
    Pessoa chico = Pessoa("Francisco S. C. da C. Neto");

    chico.setEnd(end1);

    Endereco end2 = Endereco();
    Pessoa derzu = Pessoa("Derzu Omaia", end2, "(11) 999-000-123");

    cout << "Pessoa 1:" << endl << "Nome: " << chico.getNome() << endl;
    cout << "Endereco: " << chico.getEndStr() << endl << "Telefone: " << chico.getTel() << endl;

    cout << "Pessoa 2:" << endl << "Nome: " << derzu.getNome() << endl;
    cout << "Endereco: " << derzu.getEndStr() << endl << "Telefone: " << derzu.getTel() << endl;

    return 0;
}