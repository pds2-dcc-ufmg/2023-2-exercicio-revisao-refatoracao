#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        double taxaJuros;
    public:
        void calcularJuros();
        double getTaxaJuros() const;
        void setTaxaJuros(double novaTaxaJuros);
};

#endif