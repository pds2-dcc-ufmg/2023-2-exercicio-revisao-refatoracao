#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
private:
    double taxaJuros;
public:
    ContaPoupanca(std::string _titular, double _saldo, double _taxaJuros);
    void calcularJuros();
};

#endif