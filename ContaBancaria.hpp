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
    ContaBancaria(std::string titular, double saldo);

    void depositar(double valor);
    void sacar(double valor);

    std::string get_titular() const;
    double get_saldo() const;

protected:
    void set_saldo(double _saldo);
};
#endif
