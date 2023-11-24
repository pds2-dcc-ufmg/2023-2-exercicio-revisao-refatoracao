#include "Banco.hpp"
#include "ContaBancaria.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    contas.push_back(conta);
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}

Banco::~Banco() {
    for (ContaBancaria* conta : contas) {
        delete conta;
    }
}
