#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string _titular, double _saldo):titular(_titular),saldo(_saldo){}

double ContaBancaria::getSaldo(){
    return this->saldo;
}

std::string ContaBancaria::getTitular(){
    return this->titular;
}

void ContaBancaria::setTitular(std::string _titular){
    this->titular=_titular;
}

void ContaBancaria::setSaldo(double _saldo){
    this->saldo=_saldo;
}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        this->saldo += valor;
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } 
    else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor){
    if (valor > 0 && valor <= this->saldo) {
        this->saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso."<<std::endl;
    } 
    else{
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente."<<std::endl;
    }
}

ContaBancaria::~ContaBancaria(){}