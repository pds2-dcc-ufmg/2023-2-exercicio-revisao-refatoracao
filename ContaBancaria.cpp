#include "ContaBancaria.hpp"

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        this->saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= this->saldo) {
        this->saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

void ContaBancaria::set_saldo(double valor) {
    this->saldo = valor;
}
double ContaBancaria::get_saldo() {
    return this->saldo;
}
std::string ContaBancaria::get_titular() {
    return this->titular;
}

ContaBancaria::ContaBancaria(std::string titular, double saldo) : titular(titular), saldo(saldo) {}
