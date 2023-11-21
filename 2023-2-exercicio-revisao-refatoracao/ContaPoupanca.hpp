#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
private:
    double _taxa_juros;
    ContaBancaria conta_bancaria;

public:
    ContaPoupanca(double taxa_juros);
    void calcular_juros();
    double get_taxa_juros();
    void set_taxa_juros(double nova_taxa);

};


#endif