#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {    
public:

    ContaPoupanca(std::string titular, double saldo, double taxaJuros);

    void calcularJuros();
    double getTaxaJuros() const;

private:

    double taxaJuros;
};

#endif