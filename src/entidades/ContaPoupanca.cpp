#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxaJuros) : ContaBancaria(titular, saldo), _taxaJuros(taxaJuros){};

void ContaPoupanca::calcularJuros(){
    double porcentagemJuros = _taxaJuros / 100;
    double juros = this->getSaldo() * porcentagemJuros;
    this->adicionarIncremento(juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}
