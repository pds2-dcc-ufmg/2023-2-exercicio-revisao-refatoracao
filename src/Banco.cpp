#include "Banco.hpp"

Banco::~Banco() {
    for (ContaBancaria *conta : this->_contas) {
        delete conta;
    }
}

void Banco::adicionar_conta(ContaBancaria * conta) {
    this->_contas.push_back(conta);
}

void Banco::adicionar_conta_corrente(std::string titular, double saldo, double limite) {
    ContaCorrente *conta = new ContaCorrente(titular, saldo, limite);
    this->adicionar_conta(conta);
}

void Banco::adicionar_conta_poupanca(std::string titular, double saldo, double taxa) {
    ContaPoupanca *conta = new ContaPoupanca(titular, saldo, taxa);
    this->adicionar_conta(conta);
}

void Banco::exibir_todas_contas() {
    for (ContaBancaria *conta : _contas) {
        std::cout << "Saldo da conta de " << conta->get_titular() << ": R$" << conta->get_saldo() << std::endl;
    }
}

void Banco::sacar(int id, double valor) {
    this->_contas[id]->sacar(valor);
}

void Banco::depositar(int id, double valor) {
    this->_contas[id]->depositar(valor);
}

ContaBancaria*  Banco::get_conta(int id) {
    return this->_contas[id];
}