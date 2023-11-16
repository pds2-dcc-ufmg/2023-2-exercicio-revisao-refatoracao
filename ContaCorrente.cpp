#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(const std::string &titular, double saldo, double limiteChequeEspecial)
    : ContaBancaria(titular, saldo), limiteChequeEspecial(limiteChequeEspecial) {}

void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = getSaldo() + limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        setSaldo(getSaldo() - valor);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

double ContaCorrente::getLimiteChequeEspecial() const {
    return limiteChequeEspecial;
}

void ContaCorrente::setLimiteChequeEspecial(double limite) {
    limiteChequeEspecial = limite;
}
