#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    this->_contas.push_back(conta);
}

ContaCorrente* Banco::criarContaCorrente(std::string titular, double saldo, double limite_cheque_especial){
    ContaCorrente* nova_conta = new ContaCorrente(titular, saldo, limite_cheque_especial);
    this->adicionarConta(nova_conta);
    return nova_conta;
}


ContaPoupanca* Banco::criarContaPoupanca(std::string titular, double saldo, double taxa_juros){
    ContaPoupanca* nova_conta = new ContaPoupanca(titular, saldo, taxa_juros);
    this->adicionarConta(nova_conta);
    return nova_conta;
}


void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : this->_contas) {
        conta->exibirInfo();
    }
}