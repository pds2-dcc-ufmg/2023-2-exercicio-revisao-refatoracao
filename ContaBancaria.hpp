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
    std::string get_titular();
    double get_saldo();
    void mudar_saldo(double valor);
    void depositar(double valor);
    void sacar(double valor);
    void print_info();
};

#endif
