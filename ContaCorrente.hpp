#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class conta_corrente : public ContaBancaria {
    private:
        double limiteChequeEspecial;

    public:
        void usarChequeEspecial(double valor) {
            double saldo = Get_saldo();
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