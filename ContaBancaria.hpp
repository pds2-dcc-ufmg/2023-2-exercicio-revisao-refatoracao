#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
    private:
        std::string titular;

    public:
        void depositar(double valor);
        void sacar(double valor);
        double getSaldo();
        std::string getTitular();
        //virtual bool transferir(double valor, char t);
        ContaBancaria(std::string titular, double saldo);

    protected:
        double saldo;
};

#endif
