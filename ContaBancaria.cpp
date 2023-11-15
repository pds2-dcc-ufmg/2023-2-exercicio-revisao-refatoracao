#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(const std::string& titular, double saldo) : titular(titular), saldo(saldo) {}

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

double ContaBancaria::getSaldo() const {
    return saldo;
}

std::string ContaBancaria::getTitular() const {
    return titular;
}

void ContaBancaria::setSaldo(double _saldo){
        saldo = _saldo;
}
