#include "ContaPoupanca.hpp"        
    
void ContaPoupanca::calcular_juros() {
    double juros = this->get_saldo() * this->taxa_juros / 100;
    this->set_saldo(this->get_saldo() + juros);
    std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double taxa) : ContaBancaria(titular, saldo), taxa_juros(taxa) {}
