// ContaBancaria.cpp

#include "ContaBancaria.hpp"

void ContaBancaria::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Depósito de R$" << amount << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Saque de R$" << amount << " efetuado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

std::string ContaBancaria::getHolder() const {
    return holder;
}

double ContaBancaria::getBalance() const {
    return balance;
}

void ContaBancaria::setHolder(const std::string& newHolder) {
    holder = newHolder;
}

void ContaBancaria::setBalance(double newBalance) {
    balance = newBalance;
}
