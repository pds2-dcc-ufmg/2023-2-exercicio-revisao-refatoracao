#include "Banco.hpp"


void Banco:: adicionarConta(ContaBancaria* conta){
    this->contas.push_back(conta);
}

void Banco::exibir_todas_contas(){
    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << std::endl;
    }
}

Banco::~Banco(){
    for (ContaBancaria* conta : contas) {
        delete conta;
    }
}