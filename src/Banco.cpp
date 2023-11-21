#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    this->_contas.push_back(conta);
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : this->_contas) {
        conta->exibirInfo();
    }
}