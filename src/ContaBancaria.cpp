#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string nome){
    this->_titular = nome;
    this->_saldo = 0.0;
}

ContaBancaria::~ContaBancaria() {}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        this->_saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        throw ValorInvalido();
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= _saldo) {
        this->_saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        throw SaqueInvalido();
    }
}

std::string ContaBancaria::getTitular(){
    return this->_titular;
}

double ContaBancaria::getSaldo(){
    return this->_saldo;
}

void ContaBancaria::setSaldo(double novoSaldo){
    this->_saldo = novoSaldo;
}