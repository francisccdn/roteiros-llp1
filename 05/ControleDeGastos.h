#ifndef CONTROLE_DE_GASTOS_H
#define CONTROLE_DE_GASTOS_H

#include "Despesa.h"
#include <vector>
#include <string>

class ControleDeGastos{
private:
  std::vector<Despesa> despesas;

public:
  void setDespesa(Despesa d, int pos);
  double calculaTotalDeDespesas();
  bool existeDespesaDoTipo(std::string t);
};

#endif //CONTROLE_DE_GASTOS_H
