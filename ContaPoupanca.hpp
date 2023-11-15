#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
public:
    ContaPoupanca(const std::string& titular, double saldo, double taxaJuros);

    void calcularJuros();

    // Getter e Setter para taxaJuros
    double getTaxaJuros() const;
    void setTaxaJuros(double taxa);

private:
    double taxaJuros_;
};

#endif
