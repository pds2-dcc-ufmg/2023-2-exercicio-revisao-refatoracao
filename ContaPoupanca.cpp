#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca() {
    this->set_taxa_juros(0.0);
}

double ContaPoupanca::get_taxa_juros() {
    return taxaJuros;
}

void ContaPoupanca::set_taxa_juros(double taxaJuros) {
    this->taxaJuros = taxaJuros;
}

void ContaPoupanca::calcular_juros() {
    double saldoAtual = this->get_saldo();
    double jurosAplicado = saldoAtual * this->get_taxa_juros() / 100;
    this->set_saldo(saldoAtual + jurosAplicado);
    std::cout << "Juros de R$" << jurosAplicado << " calculados e adicionados à conta." << std::endl;
}