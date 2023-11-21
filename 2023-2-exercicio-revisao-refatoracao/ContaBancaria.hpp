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
    ContaBancaria(std::string titular, double saldo);
    void depositar(double valor);
    void sacar(double valor);
    std::string get_titular() const;
    double get_saldo() const;
    void set_saldo(double novo_saldo);

};

#endif
