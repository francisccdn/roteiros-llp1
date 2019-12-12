#include "TrabalhadorPorHora.h"

PorHora::PorHora(std::string nome, double valorDaHora) : Trabalhador(nome, 0)
{
    this->valorDaHora = valorDaHora;
}

float PorHora::calcularPagamentoSemanal(int horas){
    float hComExtra = 0;
    
    if(horas > 40){
        hComExtra = (horas - 40) * 1.5;
        hComExtra += 40;
    }else{
        hComExtra = horas;
    }

    return valorDaHora * hComExtra;
}