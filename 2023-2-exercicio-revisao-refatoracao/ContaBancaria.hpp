#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
private:
    std::string _titular;
    double _saldo;

public:
    void depositar(double valor);
    void sacar(double valor);
    std::string get_titular();
    double get_saldo();
    void set_saldo(double novo_saldo);

};

#endif
