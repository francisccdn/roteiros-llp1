#include <iostream>
#include <vector>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){
    vector<Trabalhador*> funcs;
    int hrs;

    funcs.push_back(new Assalariado("Derzu", 8000));
    funcs.push_back(new PorHora("Arthur Ruan", 25));
    funcs.push_back(new PorHora("Chico", 8));
    funcs.push_back(new Assalariado("Victor", 999999999999));

    for(int i = 0; i < funcs.size(); i++){
        cout << "Quantas horas " << funcs[i]->getNome() << " trabalhou nessa semana?" << endl;
        cin >>  hrs;
        cout << funcs[i]->getNome() << " deve receber "
             << funcs[i]->calcularPagamentoSemanal(hrs) << " essa semana." << endl;
        hrs = 0;
    }
}