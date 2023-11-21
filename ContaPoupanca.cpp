#include "ContaPoupanca.hpp"

void ContaPoupanca::calcularJuros() {
    double juros = _saldo * _taxaJuros / 100;
    _saldo += juros;
    std::cout << "Juros de R$" << juros << " calculados e adicionados a conta.\n";
}

void ContaPoupanca::setJuros(double juros) {
    _taxaJuros = juros;
}
