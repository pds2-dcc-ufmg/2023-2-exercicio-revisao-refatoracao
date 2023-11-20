#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        double taxaJuros;
    public:
        ContaPoupanca();
        double get_taxa_juros();
        void set_taxa_juros(double taxaJuros);
        void calcular_juros();
};


#endif