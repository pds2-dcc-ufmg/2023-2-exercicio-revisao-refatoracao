#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria {
public:
    ContaBancaria(const std::string &titular, double saldo);
    virtual ~ContaBancaria() {}
    void depositar(double valor);
    void sacar(double valor);
    double getSaldo() const;
    std::string getTitular() const;

private:
    std::string titular;
    double saldo;

protected:
    void setSaldo(double _saldo);
};


#endif

