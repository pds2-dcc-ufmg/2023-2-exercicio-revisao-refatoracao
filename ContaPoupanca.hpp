#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include <string>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {

    private:
        double taxaJuros;

    public:
        ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double tj);
        void calcularJuros();
};


#endif