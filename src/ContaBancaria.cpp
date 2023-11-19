#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string titular, double saldo) 
    : _titular(titular), _saldo(saldo) {}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        _saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso." 
        << std::endl;
    } else {
        std::cout << "Valor de depósito inválido." << std::endl;
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= _saldo) {
        _saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso." 
        << std::endl;
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente." 
        << std::endl;
    }
}

double ContaBancaria::get_saldo() {
    return this->_saldo;
}

std::string ContaBancaria::get_titular() {
    return _titular;
}

void ContaBancaria::set_saldo(double valor) {
    _saldo += valor;
}
