#include "ContaBancaria.hpp"

#include <iostream>
#include <string>

// Getters
double ContaBancaria::getSaldo(){ return _saldo; }
std::string ContaBancaria::getTitular(){ 
    return _titular; 
}

// Setters
void ContaBancaria::setSaldo(double saldo){
    _saldo += saldo; 
}

void ContaBancaria::setTitular(std::string titular){
    _titular = titular;
}


// Other methods
void ContaBancaria::printInfo(){
    std::cout << "Saldo da conta de " << this->getTitular() 
                << ": R$" << this->getSaldo() << "\n";

}



// Talvez utilizar tratamento de exceção
void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        setSaldo(valor);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= getSaldo()) {
        setSaldo(-valor);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}