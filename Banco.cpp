#include "Banco.hpp"

std::vector<ContaBancaria*> Banco::get_contas() {
    return this->contas;
}

void Banco::set_contas(std::vector<ContaBancaria*> contas) {
    this->contas = contas;
}

void Banco::adicionar_conta(ContaBancaria* conta) {
    contas.push_back(conta);
}

void Banco::exibir_todas_contas() {
    contas = get_contas();
    size_t quantidadeContas = contas.size();
    
    for (size_t i = 0; i < quantidadeContas; i++) {
        ContaBancaria* conta_atual = contas[i];
        std::string titular_atual = conta_atual->get_titular();
        double saldo_atual = conta_atual->get_saldo();
        std::cout << "Saldo da conta de " << titular_atual << ": R$" << saldo_atual << std::endl;
    }
}
