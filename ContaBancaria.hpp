#include <iostream>
#include <string>
#include <vector>

#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

class ContaBancaria {
    std::string _titular;
    double _saldo;

public:
    ContaBancaria(std::string titular, double saldo);

    virtual ~ContaBancaria();

    std::string getTitular() const;

    double getSaldo() const;

    void alterarSaldo(double valor);

    void depositar(double valor);

    void sacar(double valor);

    void printInfo() const;
};

#endif
