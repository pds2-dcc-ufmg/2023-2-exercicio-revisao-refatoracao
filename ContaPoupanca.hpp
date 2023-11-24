#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
public:
    ContaPoupanca(const std::string& titular, double saldoInicial, double taxaJuros);

    void calcularJuros();

private:
    double taxaJuros;
};

#endif