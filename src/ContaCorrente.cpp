#include "ContaCorrente.hpp"

bool ContaCorrente::checarLimiteSuficiente(double valor){
    return this->checarSaldoSuficiente(valor - this->_limite_cheque_especial);
}


ContaCorrente::ContaCorrente(std::string titular, double saldo, double limite_cheque_especial) : 
    ContaBancaria(titular, saldo), _limite_cheque_especial(limite_cheque_especial) {}


void ContaCorrente::usarChequeEspecial(double valor){
    if (!this->checarValorValido(valor) || !this->checarLimiteSuficiente(valor)){
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
        return;
    }

    this->_saldo -= valor;
    std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
}