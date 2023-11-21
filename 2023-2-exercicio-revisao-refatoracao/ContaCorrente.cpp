#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limite_cheque_especial)
 : ContaBancaria(titular, saldo), _limite_cheque_especial(limite_cheque_especial){}

void ContaCorrente::usar_cheque_especial(double valor) {
    double _saldo = get_saldo();
    double valor_total = _saldo + _limite_cheque_especial;

    if (valor > 0 && valor <= valor_total) {
        _saldo -= valor;
        set_saldo(_saldo);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso." << std::endl;
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite." << std::endl;
    }
}

double ContaCorrente::get_limite_cheque_especial() const {
    return _limite_cheque_especial;
}

void ContaCorrente::set_limite_cheque_especial(double novo_limite) {
    _limite_cheque_especial = novo_limite;
}