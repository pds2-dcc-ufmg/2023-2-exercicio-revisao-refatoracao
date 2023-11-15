#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
    private:
        std::string _titular;
        double _saldo;
    protected:
    
        void setSaldo(double valor){
            this->_saldo = valor;
        }


    public:

        ContaBancaria(std::string titular, double saldo): _titular(titular),_saldo(saldo){};
        void depositar(double valor) {
        if (valor > 0) {
            setSaldo(getSaldo() + valor);
            std::cout << "Depósito de R$ " << valor << " efetuado com sucesso.\n";
        } else {
            std::cout << "Valor de depósito inválido.\n";
        }
        }

        void sacar(double valor) {
        if (valor > 0 && valor <= _saldo) {
            setSaldo(getSaldo() - valor);
            std::cout << "Saque de R$ " << valor << " efetuado com sucesso.\n";
        } else {
            std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
        }
        }

        std::string getTitular(){
            return this->_titular;
        }

        double getSaldo(){
            return this->_saldo;
        }


};

#endif
