#include "../include/ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca():ContaBancaria(){
    _taxaJuros = 0;
}

ContaPoupanca::ContaPoupanca(std::string titulo, double saldo, double taxaJuros):
    ContaBancaria(titulo, saldo){
        _taxaJuros = taxaJuros;
}

double ContaPoupanca::getTaxaJuros(){
    return _taxaJuros;
}

void ContaPoupanca::setTaxaJuros(double taxaJuros){
    _taxaJuros = taxaJuros;
}

void ContaPoupanca::calcularJuros() {
    double juros = getSaldo() * getTaxaJuros() / 100;
    setSaldo(juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}
  