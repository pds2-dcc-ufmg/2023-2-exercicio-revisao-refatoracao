#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
public:
    ContaPoupanca(const std::string& titular, double taxaJuros)
        : ContaBancaria(titular), taxaJuros(taxaJuros) {}

    void calcularJuros() {
        double juros = getSaldo() * taxaJuros / 100;
        setSaldo(getSaldo() + juros);
        std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
    }

private:
    double taxaJuros;
};

#endif
