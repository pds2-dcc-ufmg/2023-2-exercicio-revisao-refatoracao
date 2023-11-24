#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>
#include <exception>

class ValorInvalido : public std::exception {
    public:
    virtual const char* what() const throw() {
        return "Valor de depósito inválido.\n";
    }
};

class SaqueInvalido : public std::exception {
    public:
    virtual const char* what() const throw(){
        return "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
};

class ContaBancaria {
    private:
        std::string _titular;
        double _saldo;

    public:
        ContaBancaria(std::string nome);
        virtual ~ContaBancaria();
        
        void depositar(double valor);
        void sacar(double valor);

        std::string getTitular();
        double getSaldo();
        void setSaldo(double novoSaldo);
};

#endif
