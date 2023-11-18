#include "Banco.hpp"

Banco::~Banco(){
    for(auto& conta : this->_contas){
        delete conta;
    }
}

void Banco::adicionarConta(ContaBancaria * conta){
    this->_contas.push_back(conta);
}

void Banco::exibirTodasContas(){
    for (auto& conta : this->_contas) {
        conta->exibirConta();
    }
}
