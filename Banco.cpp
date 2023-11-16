#include "Banco.hpp"
#include "ContaBancaria.hpp"


Banco::~Banco() {
    for (ContaBancaria* conta : _contas) {
        delete conta;
    }
}

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : _contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}

ContaPoupanca* Banco::addContaPoupanca(std::string titular, double saldo, double taxaJuros) {
    ContaPoupanca* conta = new ContaPoupanca(titular, saldo, taxaJuros);
    _contas.push_back(conta);
    return conta;
}

ContaCorrente* Banco::addContaCorrente(std::string titular, double saldo, double limiteChequeEspecial) {
    ContaCorrente* conta = new ContaCorrente(titular, saldo, limiteChequeEspecial);
    _contas.push_back(conta);
    return conta;
}