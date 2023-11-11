#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxaJuros) 
    : ContaBancaria(titular, saldo), _taxaJuros(taxaJuros) {}

void ContaPoupanca::calcularJuros() {
    double juros = this->_saldo * this->_taxaJuros / 100; // Porcentagem
    this->_saldo += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}