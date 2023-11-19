#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    contas.push_back(conta);
}

std::vector<ContaBancaria*> Banco::getContas() const{
    return contas;
}

void Banco::exibir_todas_contas() const {
    std::vector<ContaBancaria*> vector_tmp = getContas();
    for (ContaBancaria* conta : vector_tmp) {
        conta->printInfo();
    }
}