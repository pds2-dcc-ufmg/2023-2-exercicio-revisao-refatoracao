#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(const std::string& titular, double saldoInicial)
    : titular(titular), saldo(saldoInicial) {}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

std::string ContaBancaria::getTitular() const {
    return titular;
}

double ContaBancaria::getSaldo() const {
    return saldo;
}