#include "Empregado.h"

Empregado::Empregado(){
  nome = "John";
  sobrenome = "Doe";
  salarioMensal = 0;
  salarioAnual = 0;
}

Empregado::Empregado(std::string n, std::string sn, double salario){
  nome = n;
  sobrenome = sn;
  salarioMensal = (salario < 0) ? 0 : salario;
  salarioAnual = salarioMensal*12;
}

void Empregado::setNome(std::string n){nome = n;}
void Empregado::setSobrenome(std::string sn){sobrenome = sn;}
void Empregado::setSalario(double v){salarioMensal = (v < 0) ? 0 : v;}

std::string Empregado::getNome(){return nome;}
std::string Empregado::getSobrenome(){return sobrenome;}
double Empregado::getSalarioMensal(){return salarioMensal;}
double Empregado::getSalarioAnual(){return salarioAnual;}

void Empregado::aumentoPorcent(int percento){
  salarioMensal += salarioMensal*((double)percento/100);
  salarioAnual = salarioMensal*12;
}
