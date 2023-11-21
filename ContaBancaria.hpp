#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
public:
    void depositar(double valor);
    void sacar(double valor);
    std::string getTitular();
    double getSaldo();
    void setTitular(std::string titular);
    void setSaldo(double saldo);

protected:
    std::string _titular;
    double _saldo;
};

#endif

