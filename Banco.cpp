#include "Banco.hpp"


void Banco:: adicionarConta(ContaBancaria* conta){
    this->contas.push_back(conta);
}

//exibe as contas dentro do vetor
void Banco::exibir_todas_contas(){
    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << std::endl;
    }
}

Banco::~Banco(){
    for (unsigned int i=0;i<this->contas.size();i++){
        delete contas[i];
    }
}