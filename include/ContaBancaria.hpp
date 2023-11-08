#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria {
private:
    std::string _titular;
    double _saldo;

protected:
    void set_saldo(double saldo);

public:
    ContaBancaria(std::string titular, double saldo);

    std::string get_titular();

    double get_saldo();

    void depositar(double valor);

    void sacar(double valor);
};

#endif
