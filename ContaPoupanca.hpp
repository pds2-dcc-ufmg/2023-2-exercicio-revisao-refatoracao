#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    public:
        void calcular_juros();
        ContaPoupanca(std::string titular, double saldo, double taxa);

    private:
        double taxa_juros;
};


#endif