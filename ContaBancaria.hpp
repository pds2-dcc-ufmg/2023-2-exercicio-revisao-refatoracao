#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
class ContaBancaria {
private:
    std::string _titular;
    double _saldo;

public:
    void depositar(double);
    void sacar(double);
    void printInfo();
    std::string getTitular();
    double getSaldo();
    void setSaldo(double valor);
    void setTitular(std::string);
};

#endif
