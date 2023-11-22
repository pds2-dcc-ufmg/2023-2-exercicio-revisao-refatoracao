#include "ContaBancaria.hpp"

#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

class ContaPoupanca : public ContaBancaria {
    double _taxaJuros;

public:
    ContaPoupanca(std::string titular, double saldo, double taxaJuros);

    ~ContaPoupanca();

    void calcularJuros();
};

#endif