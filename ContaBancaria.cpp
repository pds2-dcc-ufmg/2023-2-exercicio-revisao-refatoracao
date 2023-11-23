#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(){

}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}



void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

double ContaBancaria::getSaldo(){
    return saldo;
}


void ContaBancaria::setSaldo(double saldo){
    this->saldo = saldo;
}

std::string ContaBancaria::getTitular(){
    return _titular;
}

void ContaBancaria::setTitular(std::string titular){
    _titular = titular;
}

ContaBancaria::~ContaBancaria(){

}