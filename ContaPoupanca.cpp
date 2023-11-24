#include "ContaPoupanca.hpp"

void ContaPoupanca::calcularJuros() {
    double juros = getSaldo() * taxaJuros / 100;
    setTaxaJuros(getSaldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros() const {
    return taxaJuros;
}

void ContaPoupanca::setTaxaJuros(double novaTaxa) {
    taxaJuros = novaTaxa;
}