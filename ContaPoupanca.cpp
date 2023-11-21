#include "ContaPoupanca.hpp"


void ContaPoupanca::calcularJuros(){
    double juros = getSaldo() * taxaJuros / 100;
    setSaldo(juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}
