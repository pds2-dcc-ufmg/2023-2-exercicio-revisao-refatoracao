#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private:
        double _limite_cheque_especial;

        bool checarLimiteSuficiente(double valor);


    public:
        ContaCorrente(std::string &titular, double saldo, double limite_cheque_especial);
        void usarChequeEspecial(double valor);

void usarChequeEspecial(double valor) {
        double valorTotal = saldo + limiteChequeEspecial;
        if (valor > 0 && valor <= valorTotal) {
            saldo -= valor;
            std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
        } else {
            std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
        }
    }
};


#endif