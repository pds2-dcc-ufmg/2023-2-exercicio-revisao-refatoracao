#include "ContaCorrente.hpp"

void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = _saldo + _limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        _saldo -= valor;
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

void ContaCorrente::setLimiteChequeEspecial(double limite) {
    _limiteChequeEspecial = limite;
}
