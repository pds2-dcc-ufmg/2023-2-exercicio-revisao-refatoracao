#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(const std::string& titular, double saldo)
    : titular_(titular), saldo_(saldo) {}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo_ += valor;
        std::cout << "Depósito de R$" << valor << " realizado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido. Verifique o valor.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= saldo_) {
        saldo_ -= valor;
        std::cout << "Saque de R$" << valor << " realizado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo disponível.\n";
    }
}

void ContaBancaria::exibirDados() const {
    std::cout << "Titular: " << titular_ << "\nSaldo: R$" << saldo_ << "\n";
}
