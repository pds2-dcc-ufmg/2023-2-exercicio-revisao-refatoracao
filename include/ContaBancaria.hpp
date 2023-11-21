#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
    private:
        std::string _titular;
    

    protected:
        double _saldo;
        bool checarValorValido(double valor);
        bool checarSaldoSuficiente(double valor);


    public:
        ContaBancaria(std::string &titular, double saldo);
        virtual ~ContaBancaria() = 0;

        void depositar(double valor);
        void sacar(double valor);

        void exibirInfo();
};

#endif
