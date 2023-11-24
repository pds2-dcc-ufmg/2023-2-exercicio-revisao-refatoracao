#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string _titular, double _saldo,double _taxaJuros):ContaBancaria(_titular,_saldo),taxaJuros(_taxaJuros){}

//define os juros a serem calculados na outra função
void ContaPoupanca::setJuros(){
    this->juros = this->getSaldo() * (this->taxaJuros)/100;
}
//calcula o valor dos juros;
void ContaPoupanca::calcularJuros(){
    this->setJuros();
    this->setSaldo(this->getSaldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}
//retornar a taxa de juros
double ContaPoupanca::getTaxaJuros(){
    return this->taxaJuros;
}

ContaPoupanca::~ContaPoupanca(){}