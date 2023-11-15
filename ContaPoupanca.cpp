#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(const std::string& titular, double saldo, double taxaJuros)
    : ContaBancaria(titular, saldo), taxaJuros_(taxaJuros) {}

void ContaPoupanca::calcularJuros() {
    double juros = saldo_ * taxaJuros_ / 100;
    saldo_ += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros() const {
    return taxaJuros_;
}

void ContaPoupanca::setTaxaJuros(double taxa) {
    taxaJuros_ = taxa;
}
