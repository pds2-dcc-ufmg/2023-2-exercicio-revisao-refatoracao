#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include <string>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
private:
    double _taxaJuros;
public:
    ContaPoupanca();
    ContaPoupanca(std::string, double, double);
    void calcularJuros();
    double getTaxaJuros();
    void setTaxaJuros(double);
};


#endif