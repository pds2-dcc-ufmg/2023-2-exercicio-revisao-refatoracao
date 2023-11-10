#include "ContaPoupanca.hpp"

void ContaPoupanca::calcularJuros(){

    double juros = this->getSaldo() * this->_taxaJuros / _KpercentageCorrector;
    this->aumentarSaldo(juros);

    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta." << std::endl;
}