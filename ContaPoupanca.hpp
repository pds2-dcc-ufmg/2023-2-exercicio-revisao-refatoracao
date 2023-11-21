#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include <string>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {

    //change: deixar o atributo privado
    private:
        double taxaJuros;

    public:
        ContaPoupanca(std::string titular, double saldo, double tj): ContaBancaria(titular,saldo), taxaJuros(tj){};
        void calcularJuros();
};


#endif