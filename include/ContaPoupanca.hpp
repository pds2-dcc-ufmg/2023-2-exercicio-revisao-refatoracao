#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
private:
    double _taxaJuros;

public:
    ContaPoupanca(std::string titular, double saldo, double taxaJuros);
    void calcularJuros();
};


#endif

//\n
//private: double taxaJuros;
//identacao
//get saldo e set saldo
//pascal case nome classe