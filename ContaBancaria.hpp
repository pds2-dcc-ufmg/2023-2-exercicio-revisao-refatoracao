#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {

private:
    std::string titular;
    double saldo;

public:
    std::string getTitular();
    double getSaldo();
    void setSaldo(double _saldo);
    void setTitular(std::string _titular);
    void depositar(double valor);
    void sacar(double valor);
};

#endif
