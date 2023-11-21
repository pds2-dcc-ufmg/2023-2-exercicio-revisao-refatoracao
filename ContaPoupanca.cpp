#include "ContaPoupanca.hpp"

void ContaPoupanca::setTaxaJuros(double taxa_juros) {
    taxaJuros = taxa_juros;
}

double ContaPoupanca::getTaxaJuros() {
    return taxaJuros;
}

void ContaPoupanca::calcularJuros() {
    double juros = getSaldo() * taxaJuros / 100;
    double novo_saldo =  getSaldo() + juros;
    setSaldo(novo_saldo);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}