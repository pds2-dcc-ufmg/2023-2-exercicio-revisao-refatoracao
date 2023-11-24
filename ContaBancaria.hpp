#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
protected:
    std::string titular;
    double saldo;
public:
    ContaBancaria(std::string titular, double saldo);
    void depositar(double valor);
    void sacar(double valor);
    std::string getTitular();
    double getSaldo();
};

#endif
