#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
    ContaCorrente(const std::string& titular, double limiteChequeEspecial)
        : ContaBancaria(titular), limiteChequeEspecial(limiteChequeEspecial) {}

    void usarChequeEspecial(double valor) {
        double valorTotal = getSaldo() + limiteChequeEspecial;
        if (valor > 0 && valor <= valorTotal) {
            setSaldo(getSaldo() - valor);
            std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
        } else {
            std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
        }
    }

private:
    double limiteChequeEspecial;
};

#endif
