#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxa_juros)
 : ContaBancaria(titular, saldo), _taxa_juros(taxa_juros) {}

void ContaPoupanca::calcular_juros() {
    double _saldo = get_saldo();
    double juros = _saldo * _taxa_juros / 100;
    _saldo += juros;
    set_saldo(_saldo);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta." << std::endl;
}

double ContaPoupanca::get_taxa_juros() const{
    return _taxa_juros;
}

void ContaPoupanca::set_taxa_juros(double nova_taxa) {
    _taxa_juros = nova_taxa;
}