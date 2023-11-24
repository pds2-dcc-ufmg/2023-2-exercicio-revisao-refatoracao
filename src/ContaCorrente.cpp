#include "../include/ContaCorrente.hpp"
#include "../include/ContaBancaria.hpp"

#include <iostream>
#include <string>
#include <stdexcept>

ContaCorrente::ContaCorrente():ContaBancaria(){
    _limiteChequeEspecial = 0;
}

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial):
    ContaBancaria(titular, saldo){
        _limiteChequeEspecial = limiteChequeEspecial;
}

double ContaCorrente::getLimiteChequeEspecial(){
    return _limiteChequeEspecial;
}

void ContaCorrente::setLimiteChequeEspecial(double limiteChequeEspecial){
    _limiteChequeEspecial = limiteChequeEspecial;
}


void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = getSaldo() + getLimiteChequeEspecial();
    if (valor > 0 && valor <= valorTotal) {
        setSaldo( getSaldo() -valor );
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
        return;
    }
    
    throw std::invalid_argument("Uso de cheque especial inválido. Verifique o valor ou limite.");
}

