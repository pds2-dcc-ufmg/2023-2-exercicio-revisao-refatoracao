#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limite_cheque_especial):
    ContaBancaria(titular,saldo),_limite_cheque_especial(limite_cheque_especial){}

void ContaCorrente::usar_cheque_especial(double valor){
            double valor_total = this->get_saldo() + this->_limite_cheque_especial;
            if (valor > 0 && valor <= valor_total) {
                this->descontar_saldo(valor);
                std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
            }
            else {
                std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
            }
}