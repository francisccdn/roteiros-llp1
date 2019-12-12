#include <iostream>
#include <vector>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Hexagono.h"

using namespace std;

int main(){
    vector<FiguraGeometrica *> formas;

    formas.push_back(new Quadrado("Quadrado 1", 4));
    formas.push_back(new Triangulo("Triangulo 1", 6));
    formas.push_back(new Hexagono("Hexagono 1", 12));
    formas.push_back(new Circulo("Circulo 1", 42));
    formas.push_back(new Quadrado("Quadrado 2", 823.53));
    formas.push_back(new Hexagono("Hexagono 2", 0.972));
    formas.push_back(new Circulo("Circulo 2", 3.14));

    for (int i = 0; i < formas.size(); i++){
        cout << "A figura " << formas[i]->getNome() << " tem area: " << formas[i]->calculaArea() << endl << endl;
    }
}