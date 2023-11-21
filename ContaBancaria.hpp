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
    ContaBancaria(std::string _titular, double _saldo);
    double getSaldo();
    void setSaldo(double _saldo);
    std::string getTitular();
    void setTitular(std::string _titular);
    void depositar(double valor);
    void sacar(double valor);
    virtual ~ContaBancaria();
};
#endif
