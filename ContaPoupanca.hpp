#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria
{
public:
    ContaPoupanca(std::string titular, double valor, double taxaJuros);
    void calcularJuros();
    double getTaxaJuros();

private:
    double _taxaJuros;
};

#endif