#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class contaCorrente : public ContaBancaria {
    protected:
        double limiteChequeEspecial;
    public:
        void usarChequeEspecial(double valor) {
            double valorTotal = saldo + limiteChequeEspecial;
            if (valor > 0 && valor <= valorTotal) {
                    saldo -= valor;
                    std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
            } else {
                std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
        }
        }
        void setLimite(double novoLimite) {
            limiteChequeEspecial = novoLimite;
        }
        double getLimite() {
            return limiteChequeEspecial;
        }
};


#endif