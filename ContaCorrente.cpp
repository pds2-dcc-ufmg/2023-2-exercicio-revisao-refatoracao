#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(const std::string& titular, double saldoInicial, double limiteCheque)
    : ContaBancaria(titular, saldoInicial), limiteChequeEspecial(limiteCheque) {}

void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = getSaldo() + limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        
        sacar(valor);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}