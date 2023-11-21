#include "ContaBancaria.hpp"
#include <string>

string ContaBancaria::getTitular(){
    return _titular;
}

double ContaBancaria::getSaldo(){
    return _saldo;
}

void ContaBancaria::setSaldo(double valor){
    _saldo = valor;
}

ContaBancaria::ContaBancaria(string titular, double saldo): _titular(titular), _saldo(saldo) {}

ContaBancaria::~ContaBancaria() {}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        _saldo += valor;
        cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= _saldo) {
        _saldo -= valor;
        cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}