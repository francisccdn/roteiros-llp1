#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado
{
private:
  std::string nome, sobrenome;
  double salarioMensal, salarioAnual;

public:
  Empregado();
  Empregado(std::string, std::string, double);

  void setNome(std::string n);
  void setSobrenome(std::string s);
  void setSalario(double v);

  std::string getNome();
  std::string getSobrenome();
  double getSalarioMensal();
  double getSalarioAnual();

  void aumentoPorcent(int);

};

#endif //EMPREGADO_H
