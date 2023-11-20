#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria() {
    this->saldo = 0;
    this->titular = "";
}

ContaBancaria::~ContaBancaria() {}

void ContaBancaria::set_saldo(double saldo) {
    this->saldo = saldo;
}

double ContaBancaria::get_saldo() {
    return this->saldo;
}

std::string ContaBancaria::get_titular() {
    return this->titular;
}

void ContaBancaria::set_titular(std::string titular) {
    this->titular = titular;
}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        double saldo = get_saldo();
        double saldoAtualizado = saldo + valor;
        this->set_saldo(saldoAtualizado);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso." << std::endl;
    } else {
        std::cout << "Valor de depósito inválido." << std::endl;
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= saldo) {
        double saldo = get_saldo();
        double saldoAtualizado = saldo - valor;
        this->set_saldo(saldoAtualizado);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso." << std::endl;
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente." << std::endl;
    }
}