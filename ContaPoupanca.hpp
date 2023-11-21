#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
    double _taxaJuros;

    public:
        ContaPoupanca(std::string titular, double saldo, double taxaJuros);

        ~ContaPoupanca();

        void calcularJuros();

        //Na pratica contas poupança não precisam desse método, ele só foi criado para se adequar a implementação da main
        void usarChequeEspecial(double valor);       
};


#endif