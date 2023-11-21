#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    contas.push_back(conta);
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : contas) {
        conta->exibirSaldo();
    }
}