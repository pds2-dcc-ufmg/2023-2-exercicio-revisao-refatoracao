#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

using namespace std;

class Banco {
public:
    std::vector<ContaBancaria*> contas;

    void adicionarConta(ContaBancaria* conta) {
        contas.push_back(conta);
    }

    void exibir_todas_contas() {
        for (ContaBancaria* conta : contas) {
            std::cout << "Saldo da conta de " << conta->getTitular() << ": R$ " << conta->getSaldo() << "\n";
        }
    }
};

#endif