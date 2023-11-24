#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string nome, double saldo, double taxaDeJuros) : ContaBancaria(nome) {
    this->setSaldo(saldo);
    this->setTaxaJuros(taxaDeJuros);
}

ContaPoupanca::~ContaPoupanca() {}

void ContaPoupanca::calcularJuros() {

    double juros = (this->getSaldo() * this->_taxaJuros) / 100;
    double novoSaldo = this->getSaldo() + juros;
    this->setSaldo(novoSaldo);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
    
}

double ContaPoupanca::getTaxaJuros(){
    return this->_taxaJuros;
}

void ContaPoupanca::setTaxaJuros(double novaTaxa){
    this->_taxaJuros = novaTaxa;
}