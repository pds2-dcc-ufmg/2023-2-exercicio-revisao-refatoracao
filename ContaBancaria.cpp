#include "ContaBancaria.hpp"

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        _saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= _saldo) {
        _saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout <<  "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

std::string ContaBancaria::getTitular() {
    return _titular;
}

double ContaBancaria::getSaldo() {
    return _saldo;
}

void ContaBancaria::setTitular(std::string titular) {
    _titular = titular;
}

void ContaBancaria::setSaldo(double saldo) {
    _saldo = saldo;
}
