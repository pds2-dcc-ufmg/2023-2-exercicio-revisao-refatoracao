#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
    private:
        std::string _titular;
        double _saldo;

    public: 
        ContaBancaria (std::string titular, double saldo);

        void depositar(double valor);

        void sacar(double valor);

        std::string Get_titular ();

        double Get_saldo ();
        
};

#endif
