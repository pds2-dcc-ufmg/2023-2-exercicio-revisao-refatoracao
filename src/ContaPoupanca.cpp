#include "ContaPoupanca.hpp"

double ContaPoupanca::calcularValorJuros(){
    return this->_saldo * this->_taxa_juros / _PROPORCAO_PERCENTUAL_DECIMAL;
}

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxa_juros) :
    ContaBancaria(titular, saldo), _taxa_juros(taxa_juros) {}


void ContaPoupanca::calcularJuros(){
    double juros = this->calcularValorJuros();
    this->_saldo += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}