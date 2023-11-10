#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    this->contas.push_back(conta);
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : this->contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}

Banco::~Banco() {
    for (ContaBancaria* conta : this->contas) {
        delete conta;
    }
}
