#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limite) : ContaBancaria(titular, saldo), _limite_cheque_especial(limite) {};

void ContaCorrente::usar_cheque_especial(double valor) {
    double valor_total = this->get_saldo() + this->get_limite_cheque_especial();

    if (valor <= 0 || valor > valor_total) {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite." << std::endl;
        return;
    }

    double novo_saldo = this->get_saldo() - valor;
    this->set_saldo(novo_saldo);
    std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
}

double ContaCorrente::get_limite_cheque_especial() {
    return this->_limite_cheque_especial;
}