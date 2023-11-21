#include "ContaCorrente.hpp"
#include "ContaBancaria.hpp"

#include <iostream>

ContaCorrente::ContaCorrente(string titular, double saldo, double limiteChequeEspecial) : ContaBancaria(titular, saldo),_limiteChequeEspecial(limiteChequeEspecial){}

ContaCorrente::~ContaCorrente(){}

void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = getSaldo() + _limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        setSaldo(getSaldo() - valor);
        cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}