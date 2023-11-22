#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxaJuros) : ContaBancaria(titular, saldo){
    _taxaJuros = taxaJuros;
};

ContaPoupanca::~ContaPoupanca(){ };

void ContaPoupanca::calcularJuros(){
    
        double juros = getSaldo() * _taxaJuros / 100;

        alterarSaldo(juros);
        std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
};