#include "Banco.hpp"

void Banco::adicionarConta(const ContaBancaria& conta) {
    contas.push_back(conta);
}

void Banco::exibirTodasContas() const {
    for (const ContaBancaria& conta : contas) {
        std::cout << "Saldo da conta de " << conta.getTitular() << ": R$" << conta.getSaldo() << "\n";
    }
}