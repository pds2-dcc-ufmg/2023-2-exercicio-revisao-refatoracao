#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria{

    private:
    std::string _titular;
    double _saldo;

    public:
        ContaBancaria(std::string titular, double saldo);

        ~ContaBancaria();

        void depositar(double valor);

        void sacar(double valor);

        double getSaldo();

        void setSaldo(double valor);
        
        std::string getTitular();

        //Metodos viturais criados apenas para a adequação da implementação da main
        virtual void usarChequeEspecial(double valor) = 0;

        virtual void calcularJuros() = 0;
};

#endif
