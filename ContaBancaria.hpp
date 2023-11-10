#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria {
private:
    std::string _titular;

protected:
    double _saldo;

public:
    ContaBancaria(std::string titular, double saldo);
    void depositar(double valor);
    void sacar(double valor);
    std::string getTitular();
    double getSaldo();
};

#endif
