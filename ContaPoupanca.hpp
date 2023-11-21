#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "ContaBancaria.hpp"
#include <iostream>

class ContaPoupanca : public ContaBancaria {
private:
    double taxa_juros;

public:
    ContaPoupanca(std::string titular, double saldo, double taxa_juros);

    void calcular_juros();
    void adicionar_juros_ao_saldo(double juros);

  double get_juros() const;
    void set_juros(double taxa_juros);

};
#endif
