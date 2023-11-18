#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private: 
        //double taxaJuros;
        double _taxaJuros;
    public:
        void calcularJuros();
        void adicionarJurosConta(double valor);
        ContaPoupanca(std::string titular, double saldo, double taxaJuros);
};

#endif