#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string titular, double saldo){
    _titular = titular;
    _saldo = saldo;
};

ContaBancaria::~ContaBancaria(){ };

std::string ContaBancaria::getTitular() const { return _titular; };

double ContaBancaria::getSaldo() const { return _saldo; };

void ContaBancaria::alterarSaldo(double valor){
        _saldo += valor;
};

void ContaBancaria::depositar(double valor){
    if (valor > 0) {
        alterarSaldo(valor);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";

    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
};

void ContaBancaria::sacar(double valor) {
    if (_saldo - valor >= 0) {
        alterarSaldo(-valor);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } 
    else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
};

void ContaBancaria::printInfo() const {
    std::cout << "Saldo da conta de " << _titular << ": R$" << _saldo << "\n";
};