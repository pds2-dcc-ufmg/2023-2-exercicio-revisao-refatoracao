#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(const std::string titular, double saldo, double taxa_juros)
    : ContaBancaria(titular, saldo), taxa_juros(taxa_juros) {}

void ContaPoupanca::calcular_juros() {
    if (taxa_juros >= 0) {
        double juros = get_saldo() * taxa_juros / 100;
        adicionar_juros_ao_saldo(juros);
    }
}

void ContaPoupanca::adicionar_juros_ao_saldo(double juros) {
    set_saldo(juros + get_saldo());
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::get_juros() const {
    return taxa_juros;
}

void ContaPoupanca::set_juros(double _taxa_juros) {
    taxa_juros = _taxa_juros;
}

