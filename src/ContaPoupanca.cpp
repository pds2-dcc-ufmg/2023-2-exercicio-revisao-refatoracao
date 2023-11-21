#include "include/ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(const std::string& titular, double saldo, double taxaJuros)
    : ContaBancaria {titular, saldo}, _taxaJuros {taxaJuros} {}

ContaPoupanca::~ContaPoupanca() {};

void ContaPoupanca::calcularJuros() {
    double juros = get_saldo() * _taxaJuros / 100;
    alterar_saldo(juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta." << std::endl;
}

double ContaPoupanca::get_taxaJuros() const {
    return _taxaJuros;
}

void ContaPoupanca::set_taxaJuros(double taxaJuros) {
    _taxaJuros = taxaJuros;
}