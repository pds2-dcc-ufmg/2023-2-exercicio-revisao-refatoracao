#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private:
        double _limiteChequeEspecial;
    public:

    ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial):
    ContaBancaria (titular, saldo), _limiteChequeEspecial(limiteChequeEspecial){}
    void usarChequeEspecial(double valor) {
            double valorTotal = getSaldo() + getLimiteChequeEspecial();
            if (valor > 0 && valor <= valorTotal) {
                setSaldo(getSaldo()- valor);
                std::cout << "Uso de cheque especial de R$ " << valor << " efetuado com sucesso.\n";
            } else {
                std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
            }
        }

    double getLimiteChequeEspecial(){
        return this->_limiteChequeEspecial;
    }

};


#endif