#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(){
}

void ContaPoupanca::calcularJuros(){
    double juros = getSaldo() * _taxajuros / 100;
    setSaldo(getSaldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getTaxaJuros(){
    return _taxajuros;
}

void ContaPoupanca::setTaxaJuros(double taxajuros){
    _taxajuros = taxajuros;
}

ContaPoupanca::~ContaPoupanca(){

}
