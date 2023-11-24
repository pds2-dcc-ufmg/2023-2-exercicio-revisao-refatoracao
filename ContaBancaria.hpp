#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
public:
    void depositar(double valor);
    void sacar(double valor);

    std::string getTitular() const;
    void setTitular(const std::string& titular);

    double getSaldo() const;

private:
    std::string titular;
    double saldo;
};

#endif
