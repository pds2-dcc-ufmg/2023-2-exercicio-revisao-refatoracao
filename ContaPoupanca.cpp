#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double valor, double taxaJuros) : ContaBancaria(titular, valor), _taxaJuros(taxaJuros) {}

void ContaPoupanca::calcularJuros()
{
    double juros = this->getSaldo() * this->getTaxaJuros() / 100;
    this->setSaldo(this->getSaldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados a conta.\n";
}

double ContaPoupanca::getTaxaJuros()
{
    return this->_taxaJuros;
}