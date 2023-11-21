#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string _titular, double _saldo,double taxa):ContaBancaria(_titular,_saldo),taxaJuros(taxa){}

void ContaPoupanca::calcularJuros(){
    double juros =this->getSaldo() * taxaJuros / 100;
    this->setSaldo(this->getSaldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros(){
    return this->taxaJuros;
}

ContaPoupanca::~ContaPoupanca(){}