#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria {
public:
    ContaBancaria(const std::string& titular, double saldo);

    void depositar(double valor);
    virtual void sacar(double valor);  // Declarado como virtual para permitir sobrescrita em subclasses

    void exibirDados() const;

protected:
    std::string titular_;
    double saldo_;
};

#endif
