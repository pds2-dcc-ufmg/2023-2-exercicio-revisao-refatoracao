#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxaJuros): ContaBancaria(titular, saldo), _taxaJuros(taxaJuros){}

//Apenas por boa prática criando um destrutor para mostrar que é vazia a implementação
ContaPoupanca::~ContaPoupanca(){}

void ContaPoupanca::calcularJuros() {
    double _saldoPoupanca = getSaldo();         
    double _juros = _saldoPoupanca * _taxaJuros / 100;
    _saldoPoupanca += _juros;
    setSaldo(_saldoPoupanca);
    std::cout << "Juros de R$" << _juros << " calculados e adicionados à conta.\n";
}

//Implementação vazia apenas para funcionamento correto das mudanças na main
void ContaPoupanca::usarChequeEspecial(double valor){}