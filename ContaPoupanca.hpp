#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
private:
    double _taxajuros;
public:
    ContaPoupanca();
    void calcularJuros();
    ~ContaPoupanca();
    void setTaxaJuros(double taxajuros);
    double getTaxaJuros();
};


#endif