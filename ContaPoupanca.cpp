#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string _titular, double _saldo, double _taxaJuros) : 
ContaBancaria(_titular, _saldo), taxaJuros(_taxaJuros) {}

void ContaPoupanca::calcular_juros() {
            double juros = saldo * taxaJuros / 100;
            saldo += juros;
            std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}