#include "ContaBancaria.hpp"
#include <iostream>

void ContaBancaria::depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
        } 
        else {
            std::cout << "Valor de depósito inválido.\n";
        }
}

bool ContaBancaria::valorValido (double valor){
    if (valor > 0 && valor <= saldo) {
        return true;
    }
    else{
        return false;
    }
}

void ContaBancaria::sacar(double valor) {
    if (valorValido(valor)) {
        saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } 
    else{
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

double ContaBancaria::getSaldo() const{
    return saldo;
}

std::string ContaBancaria::getTitular() const{
    return titular;
}

void ContaBancaria::setSaldo(double novoSaldo) {
    saldo = novoSaldo;
}

void ContaBancaria::setTitular(const std::string novoTitular) {
    titular = novoTitular;
}



