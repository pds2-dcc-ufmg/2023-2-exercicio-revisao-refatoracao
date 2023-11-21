#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class contaPoupanca : public ContaBancaria {
    private:
        double taxaJuros;
    public:
        void calcularJuros() {
            double juros = saldo * taxaJuros / 100;
            saldo += juros;
            std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
        }
        void setTaxaJuros(double novoTaxaJuros){
            taxaJuros = novoTaxaJuros;
        }
};

#endif