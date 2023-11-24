#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(const std::string& titular, double saldoInicial, double taxaJuros)
    : ContaBancaria(titular, saldoInicial), taxaJuros(taxaJuros) {}

void ContaPoupanca::calcularJuros() {
    double juros = getSaldo() * taxaJuros / 100;
    // Usando métodos da classe base
    depositar(juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}