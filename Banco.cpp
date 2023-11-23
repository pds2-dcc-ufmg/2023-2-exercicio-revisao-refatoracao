#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    _contas.push_back(conta);
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : _contas) {
        conta->printSaldo();
    }
}

Banco::~Banco(){
    for (ContaBancaria *conta: _contas){
        delete (conta);
    }
}