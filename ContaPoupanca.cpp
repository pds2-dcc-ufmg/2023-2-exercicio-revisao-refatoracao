#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string _titular, double _saldo,double _taxaJuros):ContaBancaria(_titular,_saldo),taxaJuros(_taxaJuros){}

void ContaPoupanca::setJuros(){
    this->juros = this->getSaldo() * (this->taxaJuros)/100;
}

void ContaPoupanca::calcularJuros(){
    this->setJuros();
    this->setSaldo(this->getSaldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros(){
    return this->taxaJuros;
}

ContaPoupanca::~ContaPoupanca(){}