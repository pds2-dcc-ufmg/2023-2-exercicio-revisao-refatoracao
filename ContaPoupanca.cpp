#include "ContaPoupanca.hpp"
#include <string>
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string _titular, double _saldo, double _taxaJuros) : ContaBancaria(_titular, _saldo), taxaJuros(_taxaJuros) {}

void ContaPoupanca::calcularJuros()
{
    double juros = get_saldo() * taxaJuros / 100;
    mudar_saldo(get_saldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}
