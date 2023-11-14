#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {

    private:
        std::string _titular;
        double _saldo;

    //Métodos protegidos para que as classes especializadas manipulem o saldo
    protected:
        void descontar_saldo(double valor);
        void acrescentar_saldo(double valor);

    public:
        ContaBancaria(std::string titular, double saldo);
        std::string get_titular();
        double get_saldo();
        void depositar(double valor);
        void sacar(double valor);
};      

#endif
