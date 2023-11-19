#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limite): ContaBancaria(titular, saldo),
limiteChequeEspecial(limite){}

void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = this->getSaldo() + this->limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        this->saldo-=valor;
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }   
}


