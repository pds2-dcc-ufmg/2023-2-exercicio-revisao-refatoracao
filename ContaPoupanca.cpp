#include "ContaPoupanca.hpp"

void ContaPoupanca::calcularJuros() {
        double juros = getSaldo() * taxaJuros / 100;
        double novo_saldo = getSaldo() + juros;
        setSaldo(novo_saldo);
        std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros() const {
    return taxaJuros;
}

void ContaPoupanca::setTaxaJuros(double novaTaxaJuros) {
    taxaJuros = novaTaxaJuros;
}