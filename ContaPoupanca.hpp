#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
public:
    void calcularJuros();
    double getTaxaJuros() const;
    void setTaxaJuros(double taxaJuros);

private:
    double taxaJuros;
};



#endif