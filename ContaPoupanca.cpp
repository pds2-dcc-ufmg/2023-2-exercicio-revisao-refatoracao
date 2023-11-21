#include "ContaPoupanca.hpp"
#include "ContaBancaria.hpp"

using namespace std;

ContaPoupanca::ContaPoupanca(string titular, double saldo, double taxaJuros) : ContaBancaria(titular, saldo), _taxaJuros(taxaJuros) {}

ContaPoupanca::~ContaPoupanca(){}

void ContaPoupanca::calcularJuros() {
    double juros = getSaldo() * _taxaJuros / 100;
    setSaldo(getSaldo() + juros);
    cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}