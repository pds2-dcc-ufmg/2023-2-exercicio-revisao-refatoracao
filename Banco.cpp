#include "Banco.hpp"
#include <iostream>
#include <vector>

ContaPoupanca* Banco::adicionar_conta_poupanca(std::string titular, double saldo, double taxa_juros) {
    ContaPoupanca* conta = new ContaPoupanca(titular, saldo, taxa_juros);
    contas.push_back(conta);
    return conta;
}

ContaCorrente* Banco::adicionar_conta_corrente(std::string titular, double saldo, double limite_cheque_especial) {
    ContaCorrente* conta = new ContaCorrente(titular, saldo, limite_cheque_especial);
    contas.push_back(conta);
    return conta;
}

void Banco::exibir_todas_contas() {
    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->get_titular() << ": R$" << conta->get_saldo() << "\n";
    }
}

Banco::~Banco() {
    for (ContaBancaria* conta : contas) {
        delete conta;
    }
}
