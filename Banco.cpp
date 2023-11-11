#include "Banco.hpp"

ContaPoupanca* Banco::adicionarContaPoupanca(std::string titular, double saldo, double taxaJuros) {
    ContaPoupanca* conta = new ContaPoupanca(titular, saldo, taxaJuros);
    this->contas.push_back(conta);
    return conta;
}

ContaCorrente* Banco::adicionarContaCorrente(std::string titular, double saldo, double limiteChequeEspecial) {
    ContaCorrente* conta = new ContaCorrente(titular, saldo, limiteChequeEspecial);
    this->contas.push_back(conta);
    return conta;
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : this->contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}

Banco::~Banco() {
    for (ContaBancaria* conta : this->contas) {
        delete conta;
    }
}
