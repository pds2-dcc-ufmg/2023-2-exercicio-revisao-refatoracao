#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria {
public:
    ContaBancaria(const std::string& titular, double saldoInicial);

    void depositar(double valor);
    void sacar(double valor);

    std::string getTitular() const;
    double getSaldo() const;

private:
    std::string titular;
    double saldo;
};

#endif