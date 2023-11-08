#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxa_juros) : ContaBancaria(titular, saldo), _taxa_juros(taxa_juros) {}

double ContaPoupanca::get_taxa_juros() {
    return this->_taxa_juros;
}

void ContaPoupanca::calcular_juros() {
        double taxa = this->get_taxa_juros() / 100;
        double juros = this->get_saldo() * taxa;
        double novo_saldo = this->get_saldo() + juros;
        this->set_saldo(novo_saldo);
        std::cout << "Juros de R$" << juros << " calculados e adicionados à conta." << std::endl;
}