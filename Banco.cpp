#include "Banco.hpp"

void Banco::adicionar_conta(ContaBancaria* conta) {
    contas.push_back(conta);
}

void Banco::exibir_todas_contas() {
    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}