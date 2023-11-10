#include "Banco.hpp"
#include "ContaBancaria.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    contas.push_back(conta);
}

Banco::~Banco() {
    for (ContaBancaria* conta : contas) {
        delete conta;
    }
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}