#ifndef DESPESA_H
#define DESPESA_H

#include <string>

class Despesa{
private:
  double valor;
  std::string tipoDeGasto;

public:
  Despesa();
  Despesa(double v, std::string t);

  double getValor();
  std::string getTipo();

  void setValor(double);
  void setTipo(std::string);
};

#endif //DESPESA_H
