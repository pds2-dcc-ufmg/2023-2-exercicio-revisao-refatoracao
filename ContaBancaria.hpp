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
        ContaBancaria();
        ~ContaBancaria();
        double get_saldo();
        std::string get_titular();
        void set_titular(std::string titular);
        void set_saldo(double saldo);
        void depositar(double valor);
        void sacar(double valor);
};

#endif
