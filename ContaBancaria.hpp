#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
private:
    std::string titular;
    double saldo;
public:
    void depositar(double valor);
    void sacar(double valor);
    double getSaldo() const;
    std::string getTitular() const;
    void setSaldo(double novoSaldo);
    void setTitular(const std::string novoTitular);
};

#endif
