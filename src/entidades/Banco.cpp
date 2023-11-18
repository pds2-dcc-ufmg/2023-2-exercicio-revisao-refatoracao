#include "Banco.hpp"

Banco::~Banco(){
    for(auto& conta : contas){
        delete conta;
    }
}

void Banco::adicionarConta(ContaBancaria * conta){
    contas.push_back(conta);
}

void Banco::exibirTodasContas(){
    for (auto& conta : contas) {
        conta->exibirConta();
    }
}
