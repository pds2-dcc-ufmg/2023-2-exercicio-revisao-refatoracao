#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(const std::string& titular, double saldo, double taxaJuros)
    : ContaBancaria(titular, saldo), taxaJuros(taxaJuros) {}

double ContaPoupanca::calcularJuros() {
    return getSaldo() * taxaJuros / 100;
}

void ContaPoupanca::adicionarJuros() {
    double juros = calcularJuros();
    setSaldo(getSaldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros() const {
    return taxaJuros;
}

void ContaPoupanca::setTaxaJuros(double taxa) {
    taxaJuros = taxa;
}

