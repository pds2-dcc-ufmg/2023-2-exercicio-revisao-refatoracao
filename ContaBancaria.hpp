#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria {
public:
    ContaBancaria(const std::string& titular, double saldo);
    void depositar(double valor);
    void sacar(double valor);
    void printSaldo() const;

protected:
    std::string titular;
    double saldo;
};

#endif