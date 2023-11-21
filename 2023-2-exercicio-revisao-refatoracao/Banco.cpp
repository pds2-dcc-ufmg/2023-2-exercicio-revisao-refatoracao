#include "Banco.hpp"
#include <iostream>

void Banco::adicionarConta(ContaBancaria* conta) {
    contas.push_back(conta);
}

void Banco::exibirTodasContas() const {

    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
    
}

