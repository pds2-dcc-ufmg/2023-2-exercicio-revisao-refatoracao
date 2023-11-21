#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ContaBancaria {
    private:
        string _titular;
        double _saldo;

    public:
        string getTitular();
        double getSaldo();
        void setSaldo(double valor);
        ContaBancaria(string titular, double saldo);
        ~ContaBancaria();
        void depositar(double valor);
        void sacar(double valor);

};

#endif
