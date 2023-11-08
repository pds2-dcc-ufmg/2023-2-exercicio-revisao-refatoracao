#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
    private:
        std::string titular;
        double saldo;

    public: 
        void depositar(double valor) {
            if (valor > 0) {
                saldo += valor;
                std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
            } else {
                std::cout << "Valor de depósito inválido.\n";
            }
        }

        void sacar(double valor) {
            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
            } else {
                std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
            }
        }

        std::string Get_titular (){
            return this->titular;
        }

        double Get_saldo (){
            return this->saldo;
        }
};

#endif
