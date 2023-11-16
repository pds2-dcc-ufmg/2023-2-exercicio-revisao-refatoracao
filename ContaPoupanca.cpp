#include "ContaPoupanca.hpp"

void ContaPoupanca::calcular_juros()
{
    double saldo = getSaldo();
    double taxaJuros = getTaxaJuros();
    double juros = saldo * taxaJuros / 100;

        saldo += juros;
        std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros()
{
    return this->taxaJuros;
}

void ContaPoupanca::setTaxaJuros(double novaTaxaJuros)
{
    this->taxaJuros = novaTaxaJuros;
}
