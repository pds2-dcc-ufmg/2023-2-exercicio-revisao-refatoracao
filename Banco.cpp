#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    _contas.push_back(conta);
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : _contas) {
        cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}