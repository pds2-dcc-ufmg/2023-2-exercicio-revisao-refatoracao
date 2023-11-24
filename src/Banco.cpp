#include "../include/Banco.hpp"

Banco::Banco(const std::vector<ContaBancaria*>& contas)
    : _contas {contas} {}

Banco::~Banco() {
    for (ContaBancaria* conta : _contas) {
        delete conta;
    }
    _contas.clear();
}

void Banco::adicionar_conta(ContaBancaria* conta) {
    _contas.push_back(conta);
}

void Banco::exibir_todas_contas() const {
    for (const ContaBancaria* conta : _contas) {
        std::cout << "Saldo da conta de " << conta->get_titular() << ": R$" << conta->get_saldo() << std::endl;
    }
}