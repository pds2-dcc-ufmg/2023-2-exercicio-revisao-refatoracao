#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial)
    : ContaBancaria(titular, saldo), limiteChequeEspecial(limiteChequeEspecial) {}

void ContaCorrente::usarChequeEspecial(double valor) {

    double valorTotal = saldo + limiteChequeEspecial;
    
    if (valor > 0 && valor <= valorTotal) {
        saldo -= valor;
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }

}

double ContaCorrente::getLimiteChequeEspecial() const {
    return limiteChequeEspecial;
}
