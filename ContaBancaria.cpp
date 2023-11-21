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

void ContaBancaria::exibirSaldo() const {
    std::cout << "Saldo da conta de " << titular << ": R$" << saldo << "\n";
}