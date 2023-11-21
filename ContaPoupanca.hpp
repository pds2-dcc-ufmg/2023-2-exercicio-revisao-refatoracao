#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
public:
    void calcularJuros();
    void setJuros(double juros);

private:
    double _taxaJuros;
};

#endif
