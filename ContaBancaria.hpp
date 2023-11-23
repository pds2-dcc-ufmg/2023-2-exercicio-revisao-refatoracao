#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
private:
    std::string _titular;
    double saldo;

public:
    void depositar(double valor);
    void sacar(double valor);
    double getSaldo();
    void setSaldo(double saldo);
    std::string getTitular();
    void setTitular(std::string);

    ContaBancaria();
    ~ContaBancaria();

};

#endif
