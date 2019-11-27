#include "Data.h"

Data::Data(){
  dia = 1;
  mes = 1;
  ano = 1;
}

Data::Data(int d, int m, int a){
  dia = (d > 31 | d < 1) ? 1 : d;
  mes = (m > 12 | m < 1) ? 1 : m;
  ano = a;
}

int Data::getDia(){
  return dia;
}
int Data::getMes(){
  return mes;
}
int Data::getAno(){
  return ano;
}

void Data::setData(int d, int m, int a){
  dia = (d > 31 | d < 1) ? 1 : d;
  mes = (m > 12 | m < 1) ? 1 : m;
  ano = a;
}

void Data::avancaDia(){
  int ultimoDia;

  switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      ultimoDia = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      ultimoDia = 30;
      break;
    case 2:
      ultimoDia = 28;
      break;
  }

  if(dia < ultimoDia){
    dia++;
  }else{
    mes++;
    dia = 1;
  }

  if(dia == 31 && mes == 12){
    ano++;
    mes = 1;
    dia = 1;
  }
}
