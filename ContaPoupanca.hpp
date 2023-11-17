#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class conta_poupanca : public ContaBancaria {
private:
    double taxaJuros;
public:
    ContaPoupanca(std::string titular, double saldo, double taxaJuros);
    void calcularJuros();
};
#endif
