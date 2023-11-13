#include "ContaBancaria.hpp"


ContaBancaria::ContaBancaria(std::string titular, double saldo):_titular(titular),_saldo(saldo){}

void ContaBancaria::descontar_saldo(double valor){
    this->_saldo -= valor;
}

void ContaBancaria::acrescentar_saldo(double valor){
    this->_saldo += valor;
}

std::string ContaBancaria::get_titular(){
    return this->_titular;
}

double ContaBancaria::get_saldo(){
    return this->_saldo;
}

void ContaBancaria::depositar(double valor){
    if (valor > 0) {
        this->acrescentar_saldo(valor);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } 
    else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor){
    if (valor > 0 && valor <= this->_saldo) {
        this->descontar_saldo(valor);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } 
    else{
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

