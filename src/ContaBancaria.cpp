#include "ContaBancaria.hpp"


bool ContaBancaria::checarValorValido(double valor) {
    return (valor > 0);
}


bool ContaBancaria::checarSaldoSuficiente(double valor) {
    return (valor <= this->_saldo);
}


ContaBancaria::ContaBancaria(std::string titular, double saldo) : 
    _titular(titular), _saldo(saldo) {}


ContaBancaria::~ContaBancaria() {}


void ContaBancaria::depositar(double valor) {
    if (!this->checarValorValido(valor)){
        std::cout << "Valor de depósito inválido.\n";
        return;
    }

    this->_saldo += valor;
    std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
}


void ContaBancaria::sacar(double valor) {
    if (!this->checarValorValido(valor) || !this->checarSaldoSuficiente(valor)){
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
        return;
    }
    
    this->_saldo -= valor;
    std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
}


void ContaBancaria::exibirInfo(){
    std::cout << "Saldo da conta de " << this->_titular << ": R$" << this->_saldo << "\n";
}