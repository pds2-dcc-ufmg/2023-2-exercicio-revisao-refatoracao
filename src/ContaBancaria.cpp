#include "../include/ContaBancaria.hpp"

ContaBancaria::ContaBancaria(const std::string& titular, double saldo)
    : _titular {titular}, _saldo {saldo} {}

ContaBancaria::~ContaBancaria() {} 

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        _saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso." << std::endl;
    } else {
        std::cout << "Valor de depósito inválido." << std::endl;
    }
};

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= _saldo) {
        _saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso." << std::endl;
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente." << std::endl;;
    }
}

std::string ContaBancaria::get_titular() const {
    return _titular;
}

void ContaBancaria::set_titular(std::string nome) {
    _titular = nome;
}

double ContaBancaria::get_saldo() const {
    return _saldo;
}

void ContaBancaria::set_saldo(double valor) {
    _saldo = valor;
}

void ContaBancaria::alterar_saldo(double valor) {
    _saldo += valor;
} 