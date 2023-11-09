#include "ContaCorrente.hpp"

void ContaCorrente::usarChequeEspecial(double valor) {
        double valorTotal = getSaldo() + getLimiteChequeEspecial();
        if (valor > 0 && valor <= valorTotal) {
            double novo_saldo = getSaldo() - valor;
            setSaldo(novo_saldo);
            std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
        } 
        else {
            std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
        }
}

double ContaCorrente::getLimiteChequeEspecial() const{
    return this->limiteChequeEspecial;
}

void ContaCorrente::setLimiteChequeEspecial(double novoLimiteChequeEspecial) {
    limiteChequeEspecial = novoLimiteChequeEspecial;
}