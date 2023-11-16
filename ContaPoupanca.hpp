#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        double taxaJuros;

    public:
        void calcular_juros();
        double getTaxaJuros();
        void setTaxaJuros(double novaTaxaJuros);
};


#endif