#include "ContaBancaria.hpp"


std::string ContaBancaria::getTitular(){
    return this->_titular;
}

double ContaBancaria::getSaldo(){
    return this->_saldo;
}

void ContaBancaria::aumentarSaldo(double valor){
    if(this->isPositive(valor)) this->_saldo += valor;
}

void ContaBancaria::diminuirSaldo(double valor){
    if(this->isWithinSaldoLim(valor)) this->_saldo -= valor;
}

bool ContaBancaria::isPositive(double num){
    return num > _KlowestValue;
}

bool ContaBancaria::isWithinSaldoLim(double valor){
    return this->isPositive(valor) && valor <= this->_saldo;
}

void ContaBancaria::depositar(double valor){

    if(this->isPositive(valor)){
        this->aumentarSaldo(valor);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso." << std::endl;

    } else{
        std::cout << "Valor de depósito inválido." << std::endl;
    }   
}

void ContaBancaria::sacar(double valor){

    if(this->isWithinSaldoLim(valor)){
        this->diminuirSaldo(valor);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso." << std::endl;
        
    } else{
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente." << std::endl;
    }
}