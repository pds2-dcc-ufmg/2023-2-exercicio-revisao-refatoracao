#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

using namespace std;

class Banco {
    private:
        std::vector<ContaBancaria*> _contas;
    public:
        //Banco deve gerenciar as contas; Não faz sentido existir uma conta sem um banco
        ContaPoupanca* criar_conta_poupanca(std::string titular, double saldo, double taxa_juros);
        ContaCorrente* criar_conta_corrente(std::string titular, double saldo, double limite_cheque_especial);
        void exibir_todas_contas();
        ContaBancaria* get_conta(unsigned int indice);
        //Destrutor para liberar a memória de cada conta
        ~Banco();
};

#endif