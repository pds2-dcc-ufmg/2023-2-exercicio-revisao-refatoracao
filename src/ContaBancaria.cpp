#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string titular, double saldo) : _titular(titular), _saldo(saldo) {}

std::string ContaBancaria::get_titular() {
    return this->_titular;
}

double ContaBancaria::get_saldo() {
    return this->_saldo;
}

void ContaBancaria::set_saldo(double saldo) {
    this->_saldo = saldo;
}

void ContaBancaria::depositar(double valor) {
    if (valor <= 0) {
        std::cout << "Valor de depósito inválido." << std::endl;
        return;
    }

    double novo_saldo = this->get_saldo() + valor;
    this->set_saldo(novo_saldo);
    std::cout << "Depósito de R$" << valor << " efetuado com sucesso." << std::endl;
}

void ContaBancaria::sacar(double valor) {
    if (valor <= 0 || valor > this->get_saldo()) {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente." << std::endl;
        return;
    }
    double novo_saldo = this->get_saldo() - valor;
    this->set_saldo(novo_saldo);
    std::cout << "Saque de R$" << valor << " efetuado com sucesso." << std::endl;
}