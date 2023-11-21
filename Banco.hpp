#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

using namespace std;

class Banco {
    protected:
        std::vector<ContaBancaria*> contas;
    public:
        void adicionarConta(ContaBancaria* conta) {
        contas.push_back(conta);
        }
        void exibirTodasContas() {
            for (ContaBancaria* conta : contas) {
            std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
        }
        }
};

#endif