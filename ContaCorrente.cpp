#include "ContaCorrente.hpp"

void ContaCorrente::usar_cheque_especial(double valor) {
    double valorTotal = this->get_saldo() + this->limite_cheque_especial;
    if (valor > 0 && valor <= valorTotal) {
        this->set_saldo(this->get_saldo() - valor);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

ContaCorrente::ContaCorrente(std::string titular, double saldo, double lim) : ContaBancaria(titular, saldo), limite_cheque_especial(lim) {}
