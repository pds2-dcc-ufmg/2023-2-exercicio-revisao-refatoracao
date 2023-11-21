#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxaJuros): ContaBancaria(titular, saldo), _taxaJuros(taxaJuros){}

//Apenas por boa prática criando um destrutor para mostrar que é vazia a implementação
ContaPoupanca::~ContaPoupanca(){}

void ContaPoupanca::calcularJuros() {
    double saldo_poupanca = getSaldo();         
    double juros = saldo_poupanca * _taxaJuros / 100;
    saldo_poupanca += juros;
    setSaldo(saldo_poupanca);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

//Implementação vazia apenas para funcionamento correto das mudanças na main
void ContaPoupanca::usarChequeEspecial(double valor){}