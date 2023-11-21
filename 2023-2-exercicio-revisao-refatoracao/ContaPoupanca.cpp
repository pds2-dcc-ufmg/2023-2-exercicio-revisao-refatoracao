#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxaJuros)
    : ContaBancaria(titular, saldo), taxaJuros(taxaJuros) {}

void ContaPoupanca::calcularJuros() {

    double juros = saldo * taxaJuros / 100;
    saldo += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";

}

double ContaPoupanca::getTaxaJuros() const {
    return taxaJuros;
}
