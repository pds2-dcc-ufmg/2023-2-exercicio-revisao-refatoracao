#ifndef ContaPoupanca_H
#define ContaPoupanca_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
public:
    ContaPoupanca(const std::string& titular, double saldo, double taxaJuros);
    virtual ~ContaPoupanca() {};
    void adicionarJuros();
    double getTaxaJuros() const;
    void setTaxaJuros(double taxa);

private:
    double taxaJuros;
    double calcularJuros();
};

#endif
