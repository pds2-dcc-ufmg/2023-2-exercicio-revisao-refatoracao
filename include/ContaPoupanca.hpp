#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        double _taxaJuros;

    public:
        ContaPoupanca(std::string nome, double saldo, double taxaDeJuros);
        ~ContaPoupanca();

        void calcularJuros();

        double getTaxaJuros();
        void setTaxaJuros(double novaTaxa);

};

#endif