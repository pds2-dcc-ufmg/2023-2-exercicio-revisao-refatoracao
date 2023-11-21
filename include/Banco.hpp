#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

class Banco {
    private:
        std::vector<ContaBancaria*> _contas;
        void adicionarConta(ContaBancaria* conta);


    public:
        ~Banco();

        ContaCorrente* criarContaCorrente(std::string titular, double saldo, double limite_cheque_especial);
        ContaPoupanca* criarContaPoupanca(std::string titular, double saldo, double taxa_juros);

        void exibirTodasContas();
};

#endif