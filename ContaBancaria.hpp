#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
    public:
        void depositar(double valor);
        void sacar(double valor);
        double get_saldo();
        std::string get_titular();
        ContaBancaria(std::string titular, double saldo);

    protected:
        void set_saldo(double valor);
    
    private:
        std::string titular;
        double saldo;
};

#endif
