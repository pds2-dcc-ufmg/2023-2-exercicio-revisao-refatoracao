#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxaJuros): ContaBancaria(titular, saldo),
taxaJuros(taxaJuros){}

void ContaPoupanca::calcularJuros() {
    double juros = this->saldo * this->taxaJuros / 100;
    this->saldo += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}