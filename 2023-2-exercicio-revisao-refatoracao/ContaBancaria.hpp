#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <string>

class ContaBancaria {
public:

    ContaBancaria(std::string titular, double saldo);

    void depositar(double valor);
    void sacar(double valor);

    std::string getTitular() const;
    double getSaldo() const;

protected:

    std::string titular;
    double saldo;
    
};

#endif

