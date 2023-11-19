#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, 
                             double taxaJuros) 
    : ContaBancaria(titular, saldo), _taxaJuros(_taxaJuros) {}

void ContaPoupanca::calcularJuros() {
    double juros = get_saldo() * _taxaJuros / 100;
    set_saldo(juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta." 
    << std::endl;
}
