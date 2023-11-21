#include "Banco.hpp"

void Banco::adicionar_conta(ContaBancaria* conta) {
    _contas.push_back(conta);
}

void Banco::exibir_todas_contas() {
    for (ContaBancaria* conta : _contas) {
        std::cout << "Saldo da conta de " << conta->get_titular() << ": R$" << conta->get_saldo() << std::endl;
    }
}