#include "ContaPoupanca.hpp"

double ContaPoupanca::calcularValorJuros(){
    return this->_saldo * this->_taxa_juros / 100; //consertar 100
}


ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxa_juros) :
    ContaBancaria(titular, saldo), _taxa_juros(taxa_juros) {}


void ContaPoupanca::calcularJuros(){
    double juros = this->calcularValorJuros();
    this->_saldo += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}