#include "ContaBancaria.hpp"

#include <iostream>
#include <string>
#include <stdexcept>

ContaBancaria::ContaBancaria(){
    _titular = "";
    _saldo = 0;
}

ContaBancaria::ContaBancaria(std::string titular, double saldo){
    _titular = titular;
    _saldo = saldo;
}

double ContaBancaria::getSaldo(){ return _saldo; }
std::string ContaBancaria::getTitular(){ 
    return _titular; 
}

void ContaBancaria::setSaldo(double saldo){
    _saldo += saldo; 
}

void ContaBancaria::setTitular(std::string titular){
    _titular = titular;
}

void ContaBancaria::printInfo(){
    std::cout << "Saldo da conta de " << this->getTitular() 
                << ": R$" << this->getSaldo() << "\n";

}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        setSaldo(valor);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
        return;
    }
    
    throw std::invalid_argument("Valor de depósito inválido.");
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= getSaldo()) {
        setSaldo(-valor);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
        return;
    }
       
    throw std::invalid_argument("Saque inválido. Verifique o valor ou saldo insuficiente.");
}