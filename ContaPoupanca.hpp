#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class conta_poupanca : public ContaBancaria {
    public:
        void calcularJuros() {
            double juros = getSaldo() * taxaJuros / 100;
            setSaldo(juros);
            std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
        }
        double taxaJuros;
};


#endif