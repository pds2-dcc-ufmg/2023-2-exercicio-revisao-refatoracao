#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>
#include "ExcecaoBanco.hpp"

class ContaBancaria {
    private:
        static unsigned int _proximoID;
        unsigned int _ID;
        std::string _titular;
        double _saldo;
        static const int DepositoMinimo = 0;
        static const int SaqueMinimo = 0;

    public:
        void exibirConta();
        std::string getTitular();
        double getSaldo();
        void depositar(double valor);
        void sacar(double valor);
        void adicionarIncremento(double valor);
        void deduzirSaldo(double valor);

        ContaBancaria(std::string titular, double saldo);
};

#endif
