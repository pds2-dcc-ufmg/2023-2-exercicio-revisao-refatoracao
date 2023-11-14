#include "ContaPoupanca.hpp"


ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxa_juros):
    ContaBancaria(titular,saldo),_taxa_juros(taxa_juros/100){}

void ContaPoupanca::calcular_juros() {
    double juros = this->get_saldo() * this->_taxa_juros;
    this->acrescentar_saldo(juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}