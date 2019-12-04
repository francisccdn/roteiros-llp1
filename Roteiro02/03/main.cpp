#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Consultor pes1;
    Consultor pes2("10000", "Maria Consultora", 1000);
    Consultor pes3("54321", "Ricardo Riquinho", 1000);
    Funcionario pes4("12345", "Jose Funcionario", 1000);

    cout << "Funcionario 1:" << endl
         << "Matricula: " << pes1.getMatricula() << endl
         << "Nome: " << pes1.getNome() << endl
         << "Salario: " << pes1.getSalario() << endl
         << endl;

    cout << "Funcionario 2:" << endl
         << "Matricula: " << pes2.getMatricula() << endl
         << "Nome: " << pes2.getNome() << endl
         << "Salario: " << pes2.getSalario() << endl
         << endl;

    cout << "Funcionario 3:" << endl
         << "Matricula: " << pes3.getMatricula() << endl
         << "Nome: " << pes3.getNome() << endl
         << "Salario: " << pes3.getSalario(0.8) << endl
         << endl;

    cout << "Funcionario 4:" << endl
         << "Matricula: " << pes4.getMatricula() << endl
         << "Nome: " << pes4.getNome() << endl
         << "Salario: " << pes4.getSalario() << endl
         << endl;

    return 0;
}