/*
Polimorfismo é quando se utiliza um objeto ponteiro para uma classe pai, para guardar
as classes filhas. Pode-se assim também invocar métodos que foram herdados da classe pai
e sobrescritos nas classes filhas.
*/

#include "Pai.h"
#include "Filha.h"
#include "Filho.h"

using namespace std;

int main()
{
    Pai *ptr[3] = {new Filho(), new Filha(), new Pai()};

    ptr[0]->foo();
    ptr[1]->foo();
    ptr[2]->foo();

    return 0;
}