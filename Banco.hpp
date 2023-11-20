#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "ContaBancaria.hpp"

class Banco {
public:
    void adicionarConta(ContaBancaria* conta) {
        contas.push_back(conta);
    }

    void exibirTodasContas() const {
        for (const ContaBancaria* conta : contas) {
            std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
        }
    }

private:
    std::vector<ContaBancaria*> contas;
};

#endif
